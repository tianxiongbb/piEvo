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
 */

/// @file ID2_Blob_Id_.hpp
/// Data storage class.
///
/// This file was generated by application DATATOOL
/// using the following specifications:
/// 'id2.asn'.
///
/// ATTENTION:
///   Don't edit or commit this file into CVS as this file will
///   be overridden (by DATATOOL) without warning!

#ifndef OBJECTS_ID2_ID2_BLOB_ID_BASE_HPP
#define OBJECTS_ID2_ID2_BLOB_ID_BASE_HPP

// standard includes
#include <serial/serialbase.hpp>
BEGIN_NCBI_SCOPE

#ifndef BEGIN_objects_SCOPE
#  define BEGIN_objects_SCOPE BEGIN_SCOPE(objects)
#  define END_objects_SCOPE END_SCOPE(objects)
#endif
BEGIN_objects_SCOPE // namespace ncbi::objects::


// generated classes

/////////////////////////////////////////////////////////////////////////////
///*********************************************************************
/// utility types
///*********************************************************************
class NCBI_ID2_EXPORT CID2_Blob_Id_Base : public CSerialObject
{
    typedef CSerialObject Tparent;
public:
    // constructor
    CID2_Blob_Id_Base(void);
    // destructor
    virtual ~CID2_Blob_Id_Base(void);

    // type info
    DECLARE_INTERNAL_TYPE_INFO();

    enum ESub_sat {
        eSub_sat_main      =   0,
        eSub_sat_snp       =   1,
        eSub_sat_snp_graph =   4,
        eSub_sat_cdd       =   8,
        eSub_sat_mgc       =  16,
        eSub_sat_hprd      =  32,
        eSub_sat_sts       =  64,
        eSub_sat_trna      = 128,
        eSub_sat_exon      = 512
    };
    
    /// Access to ESub_sat's attributes (values, names) as defined in spec
    static const NCBI_NS_NCBI::CEnumeratedTypeValues* ENUM_METHOD_NAME(ESub_sat)(void);
    
    // types
    typedef int TSat;
    typedef int TSub_sat;
    typedef int TSat_key;
    typedef int TVersion;

    // getters
    // setters

    /// mandatory
    /// typedef int TSat
    ///  Check whether the Sat data member has been assigned a value.
    bool IsSetSat(void) const;
    /// Check whether it is safe or not to call GetSat method.
    bool CanGetSat(void) const;
    void ResetSat(void);
    TSat GetSat(void) const;
    void SetSat(TSat value);
    TSat& SetSat(void);

    /// optional with default eSub_sat_main
    /// typedef int TSub_sat
    ///  Check whether the Sub_sat data member has been assigned a value.
    bool IsSetSub_sat(void) const;
    /// Check whether it is safe or not to call GetSub_sat method.
    bool CanGetSub_sat(void) const;
    void ResetSub_sat(void);
    void SetDefaultSub_sat(void);
    TSub_sat GetSub_sat(void) const;
    void SetSub_sat(TSub_sat value);
    TSub_sat& SetSub_sat(void);

    /// mandatory
    /// typedef int TSat_key
    ///  Check whether the Sat_key data member has been assigned a value.
    bool IsSetSat_key(void) const;
    /// Check whether it is safe or not to call GetSat_key method.
    bool CanGetSat_key(void) const;
    void ResetSat_key(void);
    TSat_key GetSat_key(void) const;
    void SetSat_key(TSat_key value);
    TSat_key& SetSat_key(void);

    /// version of blob, optional in some requests
    /// optional
    /// typedef int TVersion
    ///  Check whether the Version data member has been assigned a value.
    bool IsSetVersion(void) const;
    /// Check whether it is safe or not to call GetVersion method.
    bool CanGetVersion(void) const;
    void ResetVersion(void);
    TVersion GetVersion(void) const;
    void SetVersion(TVersion value);
    TVersion& SetVersion(void);

    /// Reset the whole object
    virtual void Reset(void);


private:
    // Prohibit copy constructor and assignment operator
    CID2_Blob_Id_Base(const CID2_Blob_Id_Base&);
    CID2_Blob_Id_Base& operator=(const CID2_Blob_Id_Base&);

    // data
    Uint4 m_set_State[1];
    int m_Sat;
    int m_Sub_sat;
    int m_Sat_key;
    int m_Version;
};






///////////////////////////////////////////////////////////
///////////////////// inline methods //////////////////////
///////////////////////////////////////////////////////////
inline
bool CID2_Blob_Id_Base::IsSetSat(void) const
{
    return ((m_set_State[0] & 0x3) != 0);
}

inline
bool CID2_Blob_Id_Base::CanGetSat(void) const
{
    return IsSetSat();
}

inline
void CID2_Blob_Id_Base::ResetSat(void)
{
    m_Sat = 0;
    m_set_State[0] &= ~0x3;
}

inline
CID2_Blob_Id_Base::TSat CID2_Blob_Id_Base::GetSat(void) const
{
    if (!CanGetSat()) {
        ThrowUnassigned(0);
    }
    return m_Sat;
}

inline
void CID2_Blob_Id_Base::SetSat(CID2_Blob_Id_Base::TSat value)
{
    m_Sat = value;
    m_set_State[0] |= 0x3;
}

inline
CID2_Blob_Id_Base::TSat& CID2_Blob_Id_Base::SetSat(void)
{
#ifdef _DEBUG
    if (!IsSetSat()) {
        memset(&m_Sat,UnassignedByte(),sizeof(m_Sat));
    }
#endif
    m_set_State[0] |= 0x1;
    return m_Sat;
}

inline
bool CID2_Blob_Id_Base::IsSetSub_sat(void) const
{
    return ((m_set_State[0] & 0xc) != 0);
}

inline
bool CID2_Blob_Id_Base::CanGetSub_sat(void) const
{
    return true;
}

inline
void CID2_Blob_Id_Base::ResetSub_sat(void)
{
    m_Sub_sat = eSub_sat_main;
    m_set_State[0] &= ~0xc;
}

inline
void CID2_Blob_Id_Base::SetDefaultSub_sat(void)
{
    ResetSub_sat();
}

inline
CID2_Blob_Id_Base::TSub_sat CID2_Blob_Id_Base::GetSub_sat(void) const
{
    return m_Sub_sat;
}

inline
void CID2_Blob_Id_Base::SetSub_sat(CID2_Blob_Id_Base::TSub_sat value)
{
    m_Sub_sat = value;
    m_set_State[0] |= 0xc;
}

inline
CID2_Blob_Id_Base::TSub_sat& CID2_Blob_Id_Base::SetSub_sat(void)
{
#ifdef _DEBUG
    if (!IsSetSub_sat()) {
        memset(&m_Sub_sat,UnassignedByte(),sizeof(m_Sub_sat));
    }
#endif
    m_set_State[0] |= 0x4;
    return m_Sub_sat;
}

inline
bool CID2_Blob_Id_Base::IsSetSat_key(void) const
{
    return ((m_set_State[0] & 0x30) != 0);
}

inline
bool CID2_Blob_Id_Base::CanGetSat_key(void) const
{
    return IsSetSat_key();
}

inline
void CID2_Blob_Id_Base::ResetSat_key(void)
{
    m_Sat_key = 0;
    m_set_State[0] &= ~0x30;
}

inline
CID2_Blob_Id_Base::TSat_key CID2_Blob_Id_Base::GetSat_key(void) const
{
    if (!CanGetSat_key()) {
        ThrowUnassigned(2);
    }
    return m_Sat_key;
}

inline
void CID2_Blob_Id_Base::SetSat_key(CID2_Blob_Id_Base::TSat_key value)
{
    m_Sat_key = value;
    m_set_State[0] |= 0x30;
}

inline
CID2_Blob_Id_Base::TSat_key& CID2_Blob_Id_Base::SetSat_key(void)
{
#ifdef _DEBUG
    if (!IsSetSat_key()) {
        memset(&m_Sat_key,UnassignedByte(),sizeof(m_Sat_key));
    }
#endif
    m_set_State[0] |= 0x10;
    return m_Sat_key;
}

inline
bool CID2_Blob_Id_Base::IsSetVersion(void) const
{
    return ((m_set_State[0] & 0xc0) != 0);
}

inline
bool CID2_Blob_Id_Base::CanGetVersion(void) const
{
    return IsSetVersion();
}

inline
void CID2_Blob_Id_Base::ResetVersion(void)
{
    m_Version = 0;
    m_set_State[0] &= ~0xc0;
}

inline
CID2_Blob_Id_Base::TVersion CID2_Blob_Id_Base::GetVersion(void) const
{
    if (!CanGetVersion()) {
        ThrowUnassigned(3);
    }
    return m_Version;
}

inline
void CID2_Blob_Id_Base::SetVersion(CID2_Blob_Id_Base::TVersion value)
{
    m_Version = value;
    m_set_State[0] |= 0xc0;
}

inline
CID2_Blob_Id_Base::TVersion& CID2_Blob_Id_Base::SetVersion(void)
{
#ifdef _DEBUG
    if (!IsSetVersion()) {
        memset(&m_Version,UnassignedByte(),sizeof(m_Version));
    }
#endif
    m_set_State[0] |= 0x40;
    return m_Version;
}

///////////////////////////////////////////////////////////
////////////////// end of inline methods //////////////////
///////////////////////////////////////////////////////////





END_objects_SCOPE // namespace ncbi::objects::

END_NCBI_SCOPE


#endif // OBJECTS_ID2_ID2_BLOB_ID_BASE_HPP
