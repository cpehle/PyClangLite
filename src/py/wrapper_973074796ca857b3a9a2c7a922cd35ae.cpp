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
/* File authors: Pierre Fernique <pfernique@gmail.com> (37)                       */
/*                                                                                */
/**********************************************************************************/

#include "_clanglite.h"


namespace autowig
{
}


void wrapper_973074796ca857b3a9a2c7a922cd35ae()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    bool  (*method_pointer_448f556ce3b650d6a5015056b9790361)(class ::clang::Type  const *) = ::clang::DecltypeType::classof;
    class ::clang::QualType  (::clang::DecltypeType::*method_pointer_888b13b9242957698b06363568f6c2fb)() const = &::clang::DecltypeType::desugar;
    class ::clang::QualType  (::clang::DecltypeType::*method_pointer_876e2fff88745383ae2fde688d8f4be9)() const = &::clang::DecltypeType::getUnderlyingType;
    bool  (::clang::DecltypeType::*method_pointer_5df64edb72f15fac9fa90661950272ff)() const = &::clang::DecltypeType::isSugared;
    boost::python::class_< class ::clang::DecltypeType, autowig::HeldType< class ::clang::DecltypeType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_973074796ca857b3a9a2c7a922cd35ae("DecltypeType", "", boost::python::no_init);
    class_973074796ca857b3a9a2c7a922cd35ae.def("classof", method_pointer_448f556ce3b650d6a5015056b9790361, "");
    class_973074796ca857b3a9a2c7a922cd35ae.def("desugar", method_pointer_888b13b9242957698b06363568f6c2fb, "");
    class_973074796ca857b3a9a2c7a922cd35ae.def("get_underlying_type", method_pointer_876e2fff88745383ae2fde688d8f4be9, "");
    class_973074796ca857b3a9a2c7a922cd35ae.def("is_sugared", method_pointer_5df64edb72f15fac9fa90661950272ff, "");
    class_973074796ca857b3a9a2c7a922cd35ae.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::DecltypeType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::DecltypeType >, autowig::HeldType< class ::clang::Type > >();
    }

}