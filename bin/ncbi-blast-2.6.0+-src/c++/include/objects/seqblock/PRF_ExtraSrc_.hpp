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

/// @file PRF_ExtraSrc_.hpp
/// Data storage class.
///
/// This file was generated by application DATATOOL
/// using the following specifications:
/// 'seqblock.asn'.
///
/// ATTENTION:
///   Don't edit or commit this file into CVS as this file will
///   be overridden (by DATATOOL) without warning!

#ifndef OBJECTS_SEQBLOCK_PRF_EXTRASRC_BASE_HPP
#define OBJECTS_SEQBLOCK_PRF_EXTRASRC_BASE_HPP

// standard includes
#include <serial/serialbase.hpp>

// generated includes
#include <string>

BEGIN_NCBI_SCOPE

#ifndef BEGIN_objects_SCOPE
#  define BEGIN_objects_SCOPE BEGIN_SCOPE(objects)
#  define END_objects_SCOPE END_SCOPE(objects)
#endif
BEGIN_objects_SCOPE // namespace ncbi::objects::


// generated classes

/////////////////////////////////////////////////////////////////////////////
class NCBI_SEQBLOCK_EXPORT CPRF_ExtraSrc_Base : public CSerialObject
{
    typedef CSerialObject Tparent;
public:
    // constructor
    CPRF_ExtraSrc_Base(void);
    // destructor
    virtual ~CPRF_ExtraSrc_Base(void);

    // type info
    DECLARE_INTERNAL_TYPE_INFO();

    // types
    typedef string THost;
    typedef string TPart;
    typedef string TState;
    typedef string TStrain;
    typedef string TTaxon;

    // getters
    // setters

    /// optional
    /// typedef string THost
    ///  Check whether the Host data member has been assigned a value.
    bool IsSetHost(void) const;
    /// Check whether it is safe or not to call GetHost method.
    bool CanGetHost(void) const;
    void ResetHost(void);
    const THost& GetHost(void) const;
    void SetHost(const THost& value);
    THost& SetHost(void);

    /// optional
    /// typedef string TPart
    ///  Check whether the Part data member has been assigned a value.
    bool IsSetPart(void) const;
    /// Check whether it is safe or not to call GetPart method.
    bool CanGetPart(void) const;
    void ResetPart(void);
    const TPart& GetPart(void) const;
    void SetPart(const TPart& value);
    TPart& SetPart(void);

    /// optional
    /// typedef string TState
    ///  Check whether the State data member has been assigned a value.
    bool IsSetState(void) const;
    /// Check whether it is safe or not to call GetState method.
    bool CanGetState(void) const;
    void ResetState(void);
    const TState& GetState(void) const;
    void SetState(const TState& value);
    TState& SetState(void);

    /// optional
    /// typedef string TStrain
    ///  Check whether the Strain data member has been assigned a value.
    bool IsSetStrain(void) const;
    /// Check whether it is safe or not to call GetStrain method.
    bool CanGetStrain(void) const;
    void ResetStrain(void);
    const TStrain& GetStrain(void) const;
    void SetStrain(const TStrain& value);
    TStrain& SetStrain(void);

    /// optional
    /// typedef string TTaxon
    ///  Check whether the Taxon data member has been assigned a value.
    bool IsSetTaxon(void) const;
    /// Check whether it is safe or not to call GetTaxon method.
    bool CanGetTaxon(void) const;
    void ResetTaxon(void);
    const TTaxon& GetTaxon(void) const;
    void SetTaxon(const TTaxon& value);
    TTaxon& SetTaxon(void);

    /// Reset the whole object
    virtual void Reset(void);


private:
    // Prohibit copy constructor and assignment operator
    CPRF_ExtraSrc_Base(const CPRF_ExtraSrc_Base&);
    CPRF_ExtraSrc_Base& operator=(const CPRF_ExtraSrc_Base&);

    // data
    Uint4 m_set_State[1];
    string m_Host;
    string m_Part;
    string m_State;
    string m_Strain;
    string m_Taxon;
};






///////////////////////////////////////////////////////////
///////////////////// inline methods //////////////////////
///////////////////////////////////////////////////////////
inline
bool CPRF_ExtraSrc_Base::IsSetHost(void) const
{
    return ((m_set_State[0] & 0x3) != 0);
}

inline
bool CPRF_ExtraSrc_Base::CanGetHost(void) const
{
    return IsSetHost();
}

inline
const CPRF_ExtraSrc_Base::THost& CPRF_ExtraSrc_Base::GetHost(void) const
{
    if (!CanGetHost()) {
        ThrowUnassigned(0);
    }
    return m_Host;
}

inline
void CPRF_ExtraSrc_Base::SetHost(const CPRF_ExtraSrc_Base::THost& value)
{
    m_Host = value;
    m_set_State[0] |= 0x3;
}

inline
CPRF_ExtraSrc_Base::THost& CPRF_ExtraSrc_Base::SetHost(void)
{
#ifdef _DEBUG
    if (!IsSetHost()) {
        m_Host = UnassignedString();
    }
#endif
    m_set_State[0] |= 0x1;
    return m_Host;
}

inline
bool CPRF_ExtraSrc_Base::IsSetPart(void) const
{
    return ((m_set_State[0] & 0xc) != 0);
}

inline
bool CPRF_ExtraSrc_Base::CanGetPart(void) const
{
    return IsSetPart();
}

inline
const CPRF_ExtraSrc_Base::TPart& CPRF_ExtraSrc_Base::GetPart(void) const
{
    if (!CanGetPart()) {
        ThrowUnassigned(1);
    }
    return m_Part;
}

inline
void CPRF_ExtraSrc_Base::SetPart(const CPRF_ExtraSrc_Base::TPart& value)
{
    m_Part = value;
    m_set_State[0] |= 0xc;
}

inline
CPRF_ExtraSrc_Base::TPart& CPRF_ExtraSrc_Base::SetPart(void)
{
#ifdef _DEBUG
    if (!IsSetPart()) {
        m_Part = UnassignedString();
    }
#endif
    m_set_State[0] |= 0x4;
    return m_Part;
}

inline
bool CPRF_ExtraSrc_Base::IsSetState(void) const
{
    return ((m_set_State[0] & 0x30) != 0);
}

inline
bool CPRF_ExtraSrc_Base::CanGetState(void) const
{
    return IsSetState();
}

inline
const CPRF_ExtraSrc_Base::TState& CPRF_ExtraSrc_Base::GetState(void) const
{
    if (!CanGetState()) {
        ThrowUnassigned(2);
    }
    return m_State;
}

inline
void CPRF_ExtraSrc_Base::SetState(const CPRF_ExtraSrc_Base::TState& value)
{
    m_State = value;
    m_set_State[0] |= 0x30;
}

inline
CPRF_ExtraSrc_Base::TState& CPRF_ExtraSrc_Base::SetState(void)
{
#ifdef _DEBUG
    if (!IsSetState()) {
        m_State = UnassignedString();
    }
#endif
    m_set_State[0] |= 0x10;
    return m_State;
}

inline
bool CPRF_ExtraSrc_Base::IsSetStrain(void) const
{
    return ((m_set_State[0] & 0xc0) != 0);
}

inline
bool CPRF_ExtraSrc_Base::CanGetStrain(void) const
{
    return IsSetStrain();
}

inline
const CPRF_ExtraSrc_Base::TStrain& CPRF_ExtraSrc_Base::GetStrain(void) const
{
    if (!CanGetStrain()) {
        ThrowUnassigned(3);
    }
    return m_Strain;
}

inline
void CPRF_ExtraSrc_Base::SetStrain(const CPRF_ExtraSrc_Base::TStrain& value)
{
    m_Strain = value;
    m_set_State[0] |= 0xc0;
}

inline
CPRF_ExtraSrc_Base::TStrain& CPRF_ExtraSrc_Base::SetStrain(void)
{
#ifdef _DEBUG
    if (!IsSetStrain()) {
        m_Strain = UnassignedString();
    }
#endif
    m_set_State[0] |= 0x40;
    return m_Strain;
}

inline
bool CPRF_ExtraSrc_Base::IsSetTaxon(void) const
{
    return ((m_set_State[0] & 0x300) != 0);
}

inline
bool CPRF_ExtraSrc_Base::CanGetTaxon(void) const
{
    return IsSetTaxon();
}

inline
const CPRF_ExtraSrc_Base::TTaxon& CPRF_ExtraSrc_Base::GetTaxon(void) const
{
    if (!CanGetTaxon()) {
        ThrowUnassigned(4);
    }
    return m_Taxon;
}

inline
void CPRF_ExtraSrc_Base::SetTaxon(const CPRF_ExtraSrc_Base::TTaxon& value)
{
    m_Taxon = value;
    m_set_State[0] |= 0x300;
}

inline
CPRF_ExtraSrc_Base::TTaxon& CPRF_ExtraSrc_Base::SetTaxon(void)
{
#ifdef _DEBUG
    if (!IsSetTaxon()) {
        m_Taxon = UnassignedString();
    }
#endif
    m_set_State[0] |= 0x100;
    return m_Taxon;
}

///////////////////////////////////////////////////////////
////////////////// end of inline methods //////////////////
///////////////////////////////////////////////////////////





END_objects_SCOPE // namespace ncbi::objects::

END_NCBI_SCOPE


#endif // OBJECTS_SEQBLOCK_PRF_EXTRASRC_BASE_HPP
