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

/// @file Fix_type_.hpp
/// Data storage class.
///
/// This file was generated by application DATATOOL
/// using the following specifications:
/// 'macro.asn'.
///
/// ATTENTION:
///   Don't edit or commit this file into CVS as this file will
///   be overridden (by DATATOOL) without warning!

#ifndef OBJECTS_MACRO_FIX_TYPE_BASE_HPP
#define OBJECTS_MACRO_FIX_TYPE_BASE_HPP

// standard includes
#include <serial/serialbase.hpp>
BEGIN_NCBI_SCOPE

#ifndef BEGIN_objects_SCOPE
#  define BEGIN_objects_SCOPE BEGIN_SCOPE(objects)
#  define END_objects_SCOPE END_SCOPE(objects)
#endif
BEGIN_objects_SCOPE // namespace ncbi::objects::


// generated classes

enum EFix_type {
    eFix_type_none                        =  0,
    eFix_type_typo                        =  1,
    eFix_type_putative_typo               =  2,
    eFix_type_quickfix                    =  3,
    eFix_type_no_organelle_for_prokaryote =  4,
    eFix_type_might_be_nonfunctional      =  5,
    eFix_type_database                    =  6,
    eFix_type_remove_organism_name        =  7,
    eFix_type_inappropriate_symbol        =  8,
    eFix_type_evolutionary_relationship   =  9,
    eFix_type_use_protein                 = 10,
    eFix_type_hypothetical                = 11,
    eFix_type_british                     = 12,
    eFix_type_description                 = 13,
    eFix_type_gene                        = 14
};

/// Access to EFix_type's attributes (values, names) as defined in spec
 const NCBI_NS_NCBI::CEnumeratedTypeValues* ENUM_METHOD_NAME(EFix_type)(void);


END_objects_SCOPE // namespace ncbi::objects::

END_NCBI_SCOPE


#endif // OBJECTS_MACRO_FIX_TYPE_BASE_HPP
