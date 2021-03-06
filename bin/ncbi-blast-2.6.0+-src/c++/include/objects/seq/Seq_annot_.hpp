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

/// @file Seq_annot_.hpp
/// Data storage class.
///
/// This file was generated by application DATATOOL
/// using the following specifications:
/// 'seq.asn'.
///
/// ATTENTION:
///   Don't edit or commit this file into CVS as this file will
///   be overridden (by DATATOOL) without warning!

#ifndef OBJECTS_SEQ_SEQ_ANNOT_BASE_HPP
#define OBJECTS_SEQ_SEQ_ANNOT_BASE_HPP

// standard includes
#include <serial/serialbase.hpp>

// generated includes
#include <list>
#include <string>

BEGIN_NCBI_SCOPE

#ifndef BEGIN_objects_SCOPE
#  define BEGIN_objects_SCOPE BEGIN_SCOPE(objects)
#  define END_objects_SCOPE END_SCOPE(objects)
#endif
BEGIN_objects_SCOPE // namespace ncbi::objects::


// forward declarations
class CAnnot_descr;
class CAnnot_id;
class CSeq_align;
class CSeq_feat;
class CSeq_graph;
class CSeq_id;
class CSeq_loc;
class CSeq_table;


// generated classes

/////////////////////////////////////////////////////////////////////////////
/// features in table form
class NCBI_SEQ_EXPORT CSeq_annot_Base : public CSerialObject
{
    typedef CSerialObject Tparent;
public:
    // constructor
    CSeq_annot_Base(void);
    // destructor
    virtual ~CSeq_annot_Base(void);

    // type info
    DECLARE_INTERNAL_TYPE_INFO();

    /// source of annotation
    enum EDb {
        eDb_genbank =   1,
        eDb_embl    =   2,
        eDb_ddbj    =   3,
        eDb_pir     =   4,
        eDb_sp      =   5,
        eDb_bbone   =   6,
        eDb_pdb     =   7,
        eDb_other   = 255
    };
    
    /// Access to EDb's attributes (values, names) as defined in spec
    static const NCBI_NS_NCBI::CEnumeratedTypeValues* ENUM_METHOD_NAME(EDb)(void);
    
    /////////////////////////////////////////////////////////////////////////////
    class NCBI_SEQ_EXPORT C_Data : public CSerialObject
    {
        typedef CSerialObject Tparent;
    public:
        // constructor
        C_Data(void);
        // destructor
        ~C_Data(void);
    
        // type info
        DECLARE_INTERNAL_TYPE_INFO();
    
    
        /// Choice variants.
        enum E_Choice {
            e_not_set = 0,  ///< No variant selected
            e_Ftable,
            e_Align,
            e_Graph,
            e_Ids,          ///< used for communication between tools
            e_Locs,         ///< used for communication between tools
            e_Seq_table
        };
        /// Maximum+1 value of the choice variant enumerator.
        enum E_ChoiceStopper {
            e_MaxChoice = 7 ///< == e_Seq_table+1
        };
    
        /// Reset the whole object
        void Reset(void);
    
        /// Reset the selection (set it to e_not_set).
        void ResetSelection(void);
    
        /// Which variant is currently selected.
        E_Choice Which(void) const;
    
        /// Verify selection, throw exception if it differs from the expected.
        void CheckSelected(E_Choice index) const;
    
        /// Throw 'InvalidSelection' exception.
        NCBI_NORETURN void ThrowInvalidSelection(E_Choice index) const;
    
        /// Retrieve selection name (for diagnostic purposes).
        static string SelectionName(E_Choice index);
    
        /// Select the requested variant if needed.
        void Select(E_Choice index, EResetVariant reset = eDoResetVariant);
        /// Select the requested variant if needed,
        /// allocating CObject variants from memory pool.
        void Select(E_Choice index,
                    EResetVariant reset,
                    CObjectMemoryPool* pool);
    
        // types
        typedef list< CRef< CSeq_feat > > TFtable;
        typedef list< CRef< CSeq_align > > TAlign;
        typedef list< CRef< CSeq_graph > > TGraph;
        typedef list< CRef< CSeq_id > > TIds;
        typedef list< CRef< CSeq_loc > > TLocs;
        typedef CSeq_table TSeq_table;
    
        // getters
        // setters
    
        // typedef list< CRef< CSeq_feat > > TFtable
        bool IsFtable(void) const;
        const TFtable& GetFtable(void) const;
        TFtable& SetFtable(void);
    
        // typedef list< CRef< CSeq_align > > TAlign
        bool IsAlign(void) const;
        const TAlign& GetAlign(void) const;
        TAlign& SetAlign(void);
    
        // typedef list< CRef< CSeq_graph > > TGraph
        bool IsGraph(void) const;
        const TGraph& GetGraph(void) const;
        TGraph& SetGraph(void);
    
        // typedef list< CRef< CSeq_id > > TIds
        bool IsIds(void) const;
        const TIds& GetIds(void) const;
        TIds& SetIds(void);
    
        // typedef list< CRef< CSeq_loc > > TLocs
        bool IsLocs(void) const;
        const TLocs& GetLocs(void) const;
        TLocs& SetLocs(void);
    
        // typedef CSeq_table TSeq_table
        bool IsSeq_table(void) const;
        const TSeq_table& GetSeq_table(void) const;
        TSeq_table& SetSeq_table(void);
        void SetSeq_table(TSeq_table& value);
    
    
    private:
        // copy constructor and assignment operator
        C_Data(const C_Data& );
        C_Data& operator=(const C_Data& );
        // choice state
        E_Choice m_choice;
        // helper methods
        void DoSelect(E_Choice index, CObjectMemoryPool* pool = 0);
    
        static const char* const sm_SelectionNames[];
        // data
        union {
            NCBI_NS_NCBI::CUnionBuffer<TFtable> m_Ftable;
            NCBI_NS_NCBI::CUnionBuffer<TAlign> m_Align;
            NCBI_NS_NCBI::CUnionBuffer<TGraph> m_Graph;
            NCBI_NS_NCBI::CUnionBuffer<TIds> m_Ids;
            NCBI_NS_NCBI::CUnionBuffer<TLocs> m_Locs;
            NCBI_NS_NCBI::CSerialObject *m_object;
        };
    };
    // types
    typedef list< CRef< CAnnot_id > > TId;
    typedef int TDb;
    typedef string TName;
    typedef CAnnot_descr TDesc;
    typedef C_Data TData;

    // getters
    // setters

    /// optional
    /// typedef list< CRef< CAnnot_id > > TId
    ///  Check whether the Id data member has been assigned a value.
    bool IsSetId(void) const;
    /// Check whether it is safe or not to call GetId method.
    bool CanGetId(void) const;
    void ResetId(void);
    const TId& GetId(void) const;
    TId& SetId(void);

    /// optional
    /// typedef int TDb
    ///  Check whether the Db data member has been assigned a value.
    bool IsSetDb(void) const;
    /// Check whether it is safe or not to call GetDb method.
    bool CanGetDb(void) const;
    void ResetDb(void);
    TDb GetDb(void) const;
    void SetDb(TDb value);
    TDb& SetDb(void);

    /// source if "other" above
    /// optional
    /// typedef string TName
    ///  Check whether the Name data member has been assigned a value.
    bool IsSetName(void) const;
    /// Check whether it is safe or not to call GetName method.
    bool CanGetName(void) const;
    void ResetName(void);
    const TName& GetName(void) const;
    void SetName(const TName& value);
    TName& SetName(void);

    /// used only for stand alone Seq-annots
    /// optional
    /// typedef CAnnot_descr TDesc
    ///  Check whether the Desc data member has been assigned a value.
    bool IsSetDesc(void) const;
    /// Check whether it is safe or not to call GetDesc method.
    bool CanGetDesc(void) const;
    void ResetDesc(void);
    const TDesc& GetDesc(void) const;
    void SetDesc(TDesc& value);
    TDesc& SetDesc(void);

    /// mandatory
    /// typedef C_Data TData
    ///  Check whether the Data data member has been assigned a value.
    bool IsSetData(void) const;
    /// Check whether it is safe or not to call GetData method.
    bool CanGetData(void) const;
    void ResetData(void);
    const TData& GetData(void) const;
    void SetData(TData& value);
    TData& SetData(void);

    /// Reset the whole object
    virtual void Reset(void);


private:
    // Prohibit copy constructor and assignment operator
    CSeq_annot_Base(const CSeq_annot_Base&);
    CSeq_annot_Base& operator=(const CSeq_annot_Base&);

    // data
    Uint4 m_set_State[1];
    list< CRef< CAnnot_id > > m_Id;
    int m_Db;
    string m_Name;
    CRef< TDesc > m_Desc;
    CRef< TData > m_Data;
};






///////////////////////////////////////////////////////////
///////////////////// inline methods //////////////////////
///////////////////////////////////////////////////////////
inline
CSeq_annot_Base::C_Data::E_Choice CSeq_annot_Base::C_Data::Which(void) const
{
    return m_choice;
}

inline
void CSeq_annot_Base::C_Data::CheckSelected(E_Choice index) const
{
    if ( m_choice != index )
        ThrowInvalidSelection(index);
}

inline
void CSeq_annot_Base::C_Data::Select(E_Choice index, NCBI_NS_NCBI::EResetVariant reset, NCBI_NS_NCBI::CObjectMemoryPool* pool)
{
    if ( reset == NCBI_NS_NCBI::eDoResetVariant || m_choice != index ) {
        if ( m_choice != e_not_set )
            ResetSelection();
        DoSelect(index, pool);
    }
}

inline
void CSeq_annot_Base::C_Data::Select(E_Choice index, NCBI_NS_NCBI::EResetVariant reset)
{
    Select(index, reset, 0);
}

inline
bool CSeq_annot_Base::C_Data::IsFtable(void) const
{
    return m_choice == e_Ftable;
}

inline
const CSeq_annot_Base::C_Data::TFtable& CSeq_annot_Base::C_Data::GetFtable(void) const
{
    CheckSelected(e_Ftable);
    return *m_Ftable;
}

inline
CSeq_annot_Base::C_Data::TFtable& CSeq_annot_Base::C_Data::SetFtable(void)
{
    Select(e_Ftable, NCBI_NS_NCBI::eDoNotResetVariant);
    return *m_Ftable;
}

inline
bool CSeq_annot_Base::C_Data::IsAlign(void) const
{
    return m_choice == e_Align;
}

inline
const CSeq_annot_Base::C_Data::TAlign& CSeq_annot_Base::C_Data::GetAlign(void) const
{
    CheckSelected(e_Align);
    return *m_Align;
}

inline
CSeq_annot_Base::C_Data::TAlign& CSeq_annot_Base::C_Data::SetAlign(void)
{
    Select(e_Align, NCBI_NS_NCBI::eDoNotResetVariant);
    return *m_Align;
}

inline
bool CSeq_annot_Base::C_Data::IsGraph(void) const
{
    return m_choice == e_Graph;
}

inline
const CSeq_annot_Base::C_Data::TGraph& CSeq_annot_Base::C_Data::GetGraph(void) const
{
    CheckSelected(e_Graph);
    return *m_Graph;
}

inline
CSeq_annot_Base::C_Data::TGraph& CSeq_annot_Base::C_Data::SetGraph(void)
{
    Select(e_Graph, NCBI_NS_NCBI::eDoNotResetVariant);
    return *m_Graph;
}

inline
bool CSeq_annot_Base::C_Data::IsIds(void) const
{
    return m_choice == e_Ids;
}

inline
const CSeq_annot_Base::C_Data::TIds& CSeq_annot_Base::C_Data::GetIds(void) const
{
    CheckSelected(e_Ids);
    return *m_Ids;
}

inline
CSeq_annot_Base::C_Data::TIds& CSeq_annot_Base::C_Data::SetIds(void)
{
    Select(e_Ids, NCBI_NS_NCBI::eDoNotResetVariant);
    return *m_Ids;
}

inline
bool CSeq_annot_Base::C_Data::IsLocs(void) const
{
    return m_choice == e_Locs;
}

inline
const CSeq_annot_Base::C_Data::TLocs& CSeq_annot_Base::C_Data::GetLocs(void) const
{
    CheckSelected(e_Locs);
    return *m_Locs;
}

inline
CSeq_annot_Base::C_Data::TLocs& CSeq_annot_Base::C_Data::SetLocs(void)
{
    Select(e_Locs, NCBI_NS_NCBI::eDoNotResetVariant);
    return *m_Locs;
}

inline
bool CSeq_annot_Base::C_Data::IsSeq_table(void) const
{
    return m_choice == e_Seq_table;
}

inline
bool CSeq_annot_Base::IsSetId(void) const
{
    return ((m_set_State[0] & 0x3) != 0);
}

inline
bool CSeq_annot_Base::CanGetId(void) const
{
    return true;
}

inline
const CSeq_annot_Base::TId& CSeq_annot_Base::GetId(void) const
{
    return m_Id;
}

inline
CSeq_annot_Base::TId& CSeq_annot_Base::SetId(void)
{
    m_set_State[0] |= 0x1;
    return m_Id;
}

inline
bool CSeq_annot_Base::IsSetDb(void) const
{
    return ((m_set_State[0] & 0xc) != 0);
}

inline
bool CSeq_annot_Base::CanGetDb(void) const
{
    return IsSetDb();
}

inline
void CSeq_annot_Base::ResetDb(void)
{
    m_Db = (EDb)(0);
    m_set_State[0] &= ~0xc;
}

inline
CSeq_annot_Base::TDb CSeq_annot_Base::GetDb(void) const
{
    if (!CanGetDb()) {
        ThrowUnassigned(1);
    }
    return m_Db;
}

inline
void CSeq_annot_Base::SetDb(CSeq_annot_Base::TDb value)
{
    m_Db = value;
    m_set_State[0] |= 0xc;
}

inline
CSeq_annot_Base::TDb& CSeq_annot_Base::SetDb(void)
{
#ifdef _DEBUG
    if (!IsSetDb()) {
        memset(&m_Db,UnassignedByte(),sizeof(m_Db));
    }
#endif
    m_set_State[0] |= 0x4;
    return m_Db;
}

inline
bool CSeq_annot_Base::IsSetName(void) const
{
    return ((m_set_State[0] & 0x30) != 0);
}

inline
bool CSeq_annot_Base::CanGetName(void) const
{
    return IsSetName();
}

inline
const CSeq_annot_Base::TName& CSeq_annot_Base::GetName(void) const
{
    if (!CanGetName()) {
        ThrowUnassigned(2);
    }
    return m_Name;
}

inline
void CSeq_annot_Base::SetName(const CSeq_annot_Base::TName& value)
{
    m_Name = value;
    m_set_State[0] |= 0x30;
}

inline
CSeq_annot_Base::TName& CSeq_annot_Base::SetName(void)
{
#ifdef _DEBUG
    if (!IsSetName()) {
        m_Name = UnassignedString();
    }
#endif
    m_set_State[0] |= 0x10;
    return m_Name;
}

inline
bool CSeq_annot_Base::IsSetDesc(void) const
{
    return m_Desc.NotEmpty();
}

inline
bool CSeq_annot_Base::CanGetDesc(void) const
{
    return IsSetDesc();
}

inline
const CSeq_annot_Base::TDesc& CSeq_annot_Base::GetDesc(void) const
{
    if (!CanGetDesc()) {
        ThrowUnassigned(3);
    }
    return (*m_Desc);
}

inline
bool CSeq_annot_Base::IsSetData(void) const
{
    return m_Data.NotEmpty();
}

inline
bool CSeq_annot_Base::CanGetData(void) const
{
    return true;
}

inline
const CSeq_annot_Base::TData& CSeq_annot_Base::GetData(void) const
{
    if ( !m_Data ) {
        const_cast<CSeq_annot_Base*>(this)->ResetData();
    }
    return (*m_Data);
}

inline
CSeq_annot_Base::TData& CSeq_annot_Base::SetData(void)
{
    if ( !m_Data ) {
        ResetData();
    }
    return (*m_Data);
}

///////////////////////////////////////////////////////////
////////////////// end of inline methods //////////////////
///////////////////////////////////////////////////////////





END_objects_SCOPE // namespace ncbi::objects::

END_NCBI_SCOPE


#endif // OBJECTS_SEQ_SEQ_ANNOT_BASE_HPP
