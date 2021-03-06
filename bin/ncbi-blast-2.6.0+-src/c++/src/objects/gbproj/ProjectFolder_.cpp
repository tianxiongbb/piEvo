/* $Id$
 * ===========================================================================
 *
 *                            PUBLIC DOMAIN NOTICE
 *               National Center for Biotechnology Information
 *
 *  This software/database is a "United States Government Work" under the
 *  terms of the United States Copyright Act.  It was written as part of
 *  the author's official duties as a United States Government employee and
 *  thus cannot be copyrighted.  This software/database is freely available
 *  to the public for use. The National Library of Medicine and the U.S.
 *  Government have not placed any restriction on its use or reproduction.
 *
 *  Although all reasonable efforts have been taken to ensure the accuracy
 *  and reliability of the software and data, the NLM and the U.S.
 *  Government do not and cannot warrant the performance or results that
 *  may be obtained by using this software or data. The NLM and the U.S.
 *  Government disclaim all warranties, express or implied, including
 *  warranties of performance, merchantability or fitness for any particular
 *  purpose.
 *
 *  Please cite the author in any work or product based on this material.
 *
 * ===========================================================================
 *
 * File Description:
 *   This code was generated by application DATATOOL
 *   using the following specifications:
 *   'gbproj.asn'.
 *
 * ATTENTION:
 *   Don't edit or commit this file into CVS as this file will
 *   be overridden (by DATATOOL) without warning!
 * ===========================================================================
 */

// standard includes
#include <ncbi_pch.hpp>
#include <serial/serialimpl.hpp>

// generated includes
#include <objects/gbproj/ProjectFolder.hpp>
#include <objects/gbproj/FolderInfo.hpp>
#include <objects/gbproj/ProjectItem.hpp>
BEGIN_NCBI_SCOPE

BEGIN_objects_SCOPE // namespace ncbi::objects::


// generated classes

void CProjectFolder_Base::ResetInfo(void)
{
    if ( !m_Info ) {
        m_Info.Reset(new TInfo());
        return;
    }
    (*m_Info).Reset();
}

void CProjectFolder_Base::SetInfo(CProjectFolder_Base::TInfo& value)
{
    m_Info.Reset(&value);
}

void CProjectFolder_Base::ResetFolders(void)
{
    m_Folders.clear();
    m_set_State[0] &= ~0xc;
}

void CProjectFolder_Base::ResetItems(void)
{
    m_Items.clear();
    m_set_State[0] &= ~0x30;
}

void CProjectFolder_Base::Reset(void)
{
    ResetInfo();
    ResetFolders();
    ResetItems();
}

BEGIN_NAMED_BASE_CLASS_INFO("ProjectFolder", CProjectFolder)
{
    SET_CLASS_MODULE("NCBI-GBProject");
    ADD_NAMED_REF_MEMBER("info", m_Info, CFolderInfo);
    ADD_NAMED_MEMBER("folders", m_Folders, STL_list_set, (STL_CRef, (CLASS, (CProjectFolder))))->SetSetFlag(MEMBER_PTR(m_set_State[0]))->SetOptional();
    ADD_NAMED_MEMBER("items", m_Items, STL_list_set, (STL_CRef, (CLASS, (CProjectItem))))->SetSetFlag(MEMBER_PTR(m_set_State[0]))->SetOptional();
    info->RandomOrder();
    info->CodeVersion(21600);
}
END_CLASS_INFO

// constructor
CProjectFolder_Base::CProjectFolder_Base(void)
{
    memset(m_set_State,0,sizeof(m_set_State));
    if ( !IsAllocatedInPool() ) {
        ResetInfo();
    }
}

// destructor
CProjectFolder_Base::~CProjectFolder_Base(void)
{
}



END_objects_SCOPE // namespace ncbi::objects::

END_NCBI_SCOPE

