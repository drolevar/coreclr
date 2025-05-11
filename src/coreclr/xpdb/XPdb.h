// https://github.com/3F/coreclr/issues/3
//
#pragma once
#ifndef X_PDB_3F_IMPL
#define X_PDB_3F_IMPL

#include "NativePdb/NativePdb.h"
#include "PortablePdb.h"

using io::github::_3F::coreclr::pdb::native::NativePdb;
using io::github::_3F::coreclr::pdb::portable::PortablePdb;

namespace io::github::_3F::coreclr
{
    class XPdb final
    {
    public:

        struct DocumentInfo: PortablePdb::DocumentTable {};

        struct SequencePoint: PortablePdb::SequencePoint {};

        struct MethodDebugInfo
        {
            std::vector<SequencePoint> Points;
        };

        static void parse
        (
            const wchar_t* file,
            std::vector<MethodDebugInfo>& rMethods,
            std::vector<DocumentInfo>& rDocs
        )
        {
            PortablePdb ppdb(file);

            if(ppdb.isBSJB())
            {
                for(const auto& d : ppdb.readDocuments())
                {
                    rDocs.push_back({ d });
                }

                for(const auto& dbi : ppdb.readMethodDebugInfo())
                {
                    MethodDebugInfo mdi;
                    for(const auto& s : dbi.Points)
                    {
                        mdi.Points.push_back({ s });
                    }
                    rMethods.push_back(std::move(mdi));
                }
                return;
            }
            
            std::wstring wFile(file);
            std::string sFile(wFile.begin(), wFile.end());

            NativePdb pdb(sFile);

            std::vector<NativePdb::InjectedSourcesInfo> documents
                = pdb.readInjectedSources();

            for(const auto& dbi : pdb.readMethodDebugInfo())
            {
                if(rDocs.empty() || dbi.Name != rDocs.back().Name)
                {
                    GUID lang;
                    memcpy(&lang, &documents.at(0).Lang, 16);

                    rDocs.push_back({ dbi.Name, std::move(lang) });
                }

                MethodDebugInfo mdi;
                for(const auto& point : dbi.Points)
                {
                    SequencePoint sp;
                    memcpy(&sp, &point, sizeof(NativePdb::SequencePoint));
                    sp.Document = rDocs.size();

                    mdi.Points.push_back(std::move(sp));
                }
                rMethods.push_back(std::move(mdi));
            }
        }
    };
}

#endif // #ifndef X_PDB_3F_IMPL