/**********************************************************************************/
/*                                                                                */
/* PyClangLite: Python bindings for Clang                                         */
/*                                                                                */
/* Homepage: http://pyclanglite.readthedocs.io/                                   */
/*                                                                                */
/* Copyright (c) 2016 Pierre Fernique                                             */
/*                                                                                */
/* This software is distributed under the CeCILL-C license. You should have       */
/* received a copy of the legalcode along with this work. If not, see             */
/* <http://www.cecill.info/licences/Licence_CeCILL-C_V1-en.html>.                 */
/*                                                                                */
/* File authors: Pierre Fernique <pfernique@gmail.com> (6)                        */
/*                                                                                */
/**********************************************************************************/

#include "_clanglite.h"


void wrapper_4bd154797c5c544abd201e6b7c018504()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    std::string name_a6aedb4654a55a40aeecf4b1dc5fcc98 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + "._decl");
    boost::python::object module_a6aedb4654a55a40aeecf4b1dc5fcc98(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_a6aedb4654a55a40aeecf4b1dc5fcc98.c_str()))));
    boost::python::scope().attr("_decl") = module_a6aedb4654a55a40aeecf4b1dc5fcc98;
    boost::python::scope scope_a6aedb4654a55a40aeecf4b1dc5fcc98 = module_a6aedb4654a55a40aeecf4b1dc5fcc98;
    boost::python::enum_< enum ::clang::Decl::Kind >("kind")
        .value("ACCESS_SPEC", ::clang::Decl::AccessSpec)
        .value("BLOCK", ::clang::Decl::Block)
        .value("BUILTIN_TEMPLATE", ::clang::Decl::BuiltinTemplate)
        .value("CXX_CONSTRUCTOR", ::clang::Decl::CXXConstructor)
        .value("CXX_CONVERSION", ::clang::Decl::CXXConversion)
        .value("CXX_DESTRUCTOR", ::clang::Decl::CXXDestructor)
        .value("CXX_METHOD", ::clang::Decl::CXXMethod)
        .value("CXX_RECORD", ::clang::Decl::CXXRecord)
        .value("CAPTURED", ::clang::Decl::Captured)
        .value("CLASS_SCOPE_FUNCTION_SPECIALIZATION", ::clang::Decl::ClassScopeFunctionSpecialization)
        .value("CLASS_TEMPLATE", ::clang::Decl::ClassTemplate)
        .value("CLASS_TEMPLATE_PARTIAL_SPECIALIZATION", ::clang::Decl::ClassTemplatePartialSpecialization)
        .value("CLASS_TEMPLATE_SPECIALIZATION", ::clang::Decl::ClassTemplateSpecialization)
        .value("EMPTY", ::clang::Decl::Empty)
        .value("ENUM", ::clang::Decl::Enum)
        .value("ENUM_CONSTANT", ::clang::Decl::EnumConstant)
        .value("EXTERN_C_CONTEXT", ::clang::Decl::ExternCContext)
        .value("FIELD", ::clang::Decl::Field)
        .value("FILE_SCOPE_ASM", ::clang::Decl::FileScopeAsm)
        .value("FRIEND", ::clang::Decl::Friend)
        .value("FRIEND_TEMPLATE", ::clang::Decl::FriendTemplate)
        .value("FUNCTION", ::clang::Decl::Function)
        .value("FUNCTION_TEMPLATE", ::clang::Decl::FunctionTemplate)
        .value("IMPLICIT_PARAM", ::clang::Decl::ImplicitParam)
        .value("IMPORT", ::clang::Decl::Import)
        .value("INDIRECT_FIELD", ::clang::Decl::IndirectField)
        .value("LABEL", ::clang::Decl::Label)
        .value("LINKAGE_SPEC", ::clang::Decl::LinkageSpec)
        .value("MS_PROPERTY", ::clang::Decl::MSProperty)
        .value("NAMESPACE", ::clang::Decl::Namespace)
        .value("NAMESPACE_ALIAS", ::clang::Decl::NamespaceAlias)
        .value("NON_TYPE_TEMPLATE_PARM", ::clang::Decl::NonTypeTemplateParm)
        .value("OMP_THREAD_PRIVATE", ::clang::Decl::OMPThreadPrivate)
        .value("OBJ_C_AT_DEFS_FIELD", ::clang::Decl::ObjCAtDefsField)
        .value("OBJ_C_CATEGORY", ::clang::Decl::ObjCCategory)
        .value("OBJ_C_CATEGORY_IMPL", ::clang::Decl::ObjCCategoryImpl)
        .value("OBJ_C_COMPATIBLE_ALIAS", ::clang::Decl::ObjCCompatibleAlias)
        .value("OBJ_C_IMPLEMENTATION", ::clang::Decl::ObjCImplementation)
        .value("OBJ_C_INTERFACE", ::clang::Decl::ObjCInterface)
        .value("OBJ_C_IVAR", ::clang::Decl::ObjCIvar)
        .value("OBJ_C_METHOD", ::clang::Decl::ObjCMethod)
        .value("OBJ_C_PROPERTY", ::clang::Decl::ObjCProperty)
        .value("OBJ_C_PROPERTY_IMPL", ::clang::Decl::ObjCPropertyImpl)
        .value("OBJ_C_PROTOCOL", ::clang::Decl::ObjCProtocol)
        .value("OBJ_C_TYPE_PARAM", ::clang::Decl::ObjCTypeParam)
        .value("PARM_VAR", ::clang::Decl::ParmVar)
        .value("RECORD", ::clang::Decl::Record)
        .value("STATIC_ASSERT", ::clang::Decl::StaticAssert)
        .value("TEMPLATE_TEMPLATE_PARM", ::clang::Decl::TemplateTemplateParm)
        .value("TEMPLATE_TYPE_PARM", ::clang::Decl::TemplateTypeParm)
        .value("TRANSLATION_UNIT", ::clang::Decl::TranslationUnit)
        .value("TYPE_ALIAS", ::clang::Decl::TypeAlias)
        .value("TYPE_ALIAS_TEMPLATE", ::clang::Decl::TypeAliasTemplate)
        .value("TYPEDEF", ::clang::Decl::Typedef)
        .value("UNRESOLVED_USING_TYPENAME", ::clang::Decl::UnresolvedUsingTypename)
        .value("UNRESOLVED_USING_VALUE", ::clang::Decl::UnresolvedUsingValue)
        .value("USING", ::clang::Decl::Using)
        .value("USING_DIRECTIVE", ::clang::Decl::UsingDirective)
        .value("USING_SHADOW", ::clang::Decl::UsingShadow)
        .value("VAR", ::clang::Decl::Var)
        .value("VAR_TEMPLATE", ::clang::Decl::VarTemplate)
        .value("VAR_TEMPLATE_PARTIAL_SPECIALIZATION", ::clang::Decl::VarTemplatePartialSpecialization)
        .value("VAR_TEMPLATE_SPECIALIZATION", ::clang::Decl::VarTemplateSpecialization)
        .value("FIRST_CXX_METHOD", ::clang::Decl::firstCXXMethod)
        .value("FIRST_CXX_RECORD", ::clang::Decl::firstCXXRecord)
        .value("FIRST_CLASS_TEMPLATE_SPECIALIZATION", ::clang::Decl::firstClassTemplateSpecialization)
        .value("FIRST_DECL", ::clang::Decl::firstDecl)
        .value("FIRST_DECLARATOR", ::clang::Decl::firstDeclarator)
        .value("FIRST_FIELD", ::clang::Decl::firstField)
        .value("FIRST_FUNCTION", ::clang::Decl::firstFunction)
        .value("FIRST_NAMED", ::clang::Decl::firstNamed)
        .value("FIRST_OBJ_C_CONTAINER", ::clang::Decl::firstObjCContainer)
        .value("FIRST_OBJ_C_IMPL", ::clang::Decl::firstObjCImpl)
        .value("FIRST_RECORD", ::clang::Decl::firstRecord)
        .value("FIRST_REDECLARABLE_TEMPLATE", ::clang::Decl::firstRedeclarableTemplate)
        .value("FIRST_TAG", ::clang::Decl::firstTag)
        .value("FIRST_TEMPLATE", ::clang::Decl::firstTemplate)
        .value("FIRST_TYPE", ::clang::Decl::firstType)
        .value("FIRST_TYPEDEF_NAME", ::clang::Decl::firstTypedefName)
        .value("FIRST_VALUE", ::clang::Decl::firstValue)
        .value("FIRST_VAR", ::clang::Decl::firstVar)
        .value("FIRST_VAR_TEMPLATE_SPECIALIZATION", ::clang::Decl::firstVarTemplateSpecialization)
        .value("LAST_CXX_METHOD", ::clang::Decl::lastCXXMethod)
        .value("LAST_CXX_RECORD", ::clang::Decl::lastCXXRecord)
        .value("LAST_CLASS_TEMPLATE_SPECIALIZATION", ::clang::Decl::lastClassTemplateSpecialization)
        .value("LAST_DECL", ::clang::Decl::lastDecl)
        .value("LAST_DECLARATOR", ::clang::Decl::lastDeclarator)
        .value("LAST_FIELD", ::clang::Decl::lastField)
        .value("LAST_FUNCTION", ::clang::Decl::lastFunction)
        .value("LAST_NAMED", ::clang::Decl::lastNamed)
        .value("LAST_OBJ_C_CONTAINER", ::clang::Decl::lastObjCContainer)
        .value("LAST_OBJ_C_IMPL", ::clang::Decl::lastObjCImpl)
        .value("LAST_RECORD", ::clang::Decl::lastRecord)
        .value("LAST_REDECLARABLE_TEMPLATE", ::clang::Decl::lastRedeclarableTemplate)
        .value("LAST_TAG", ::clang::Decl::lastTag)
        .value("LAST_TEMPLATE", ::clang::Decl::lastTemplate)
        .value("LAST_TYPE", ::clang::Decl::lastType)
        .value("LAST_TYPEDEF_NAME", ::clang::Decl::lastTypedefName)
        .value("LAST_VALUE", ::clang::Decl::lastValue)
        .value("LAST_VAR", ::clang::Decl::lastVar)
        .value("LAST_VAR_TEMPLATE_SPECIALIZATION", ::clang::Decl::lastVarTemplateSpecialization);
}