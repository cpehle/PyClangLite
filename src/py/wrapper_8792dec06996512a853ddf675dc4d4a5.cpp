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
/* File authors: Pierre Fernique <pfernique@gmail.com> (36)                       */
/*                                                                                */
/**********************************************************************************/

#include "_clanglite.h"


namespace autowig
{
}


void wrapper_8792dec06996512a853ddf675dc4d4a5()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    class ::clang::TypedefDecl  * (*method_pointer_603eeb74bc9c5d71a5022bc7d981a092)(class ::clang::ASTContext  &, unsigned int ) = ::clang::TypedefDecl::CreateDeserialized;
    bool  (*method_pointer_a6fa840bde5d545ea8d39691be005e47)(class ::clang::Decl  const *) = ::clang::TypedefDecl::classof;
    bool  (*method_pointer_de378b31174a5efe8edffa28f885e694)(enum ::clang::Decl::Kind ) = ::clang::TypedefDecl::classofKind;
    boost::python::class_< class ::clang::TypedefDecl, autowig::HeldType< class ::clang::TypedefDecl >, boost::python::bases< class ::clang::TypedefNameDecl >, boost::noncopyable > class_8792dec06996512a853ddf675dc4d4a5("TypedefDecl", "", boost::python::no_init);
    class_8792dec06996512a853ddf675dc4d4a5.def("create_deserialized", method_pointer_603eeb74bc9c5d71a5022bc7d981a092, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_8792dec06996512a853ddf675dc4d4a5.def("classof", method_pointer_a6fa840bde5d545ea8d39691be005e47, "");
    class_8792dec06996512a853ddf675dc4d4a5.def("classof_kind", method_pointer_de378b31174a5efe8edffa28f885e694, "");
    class_8792dec06996512a853ddf675dc4d4a5.staticmethod("classof_kind");
    class_8792dec06996512a853ddf675dc4d4a5.staticmethod("create_deserialized");
    class_8792dec06996512a853ddf675dc4d4a5.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::TypedefDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::TypedefDecl >, autowig::HeldType< class ::clang::TypedefNameDecl > >();
    }

}