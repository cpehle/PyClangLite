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
/* File authors: Pierre Fernique <pfernique@gmail.com> (35)                       */
/*                                                                                */
/**********************************************************************************/

#include "_clanglite.h"


namespace autowig
{
}


void wrapper_8c3d682fda725ecaa6f62d0cc71e3761()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    bool  (*method_pointer_fbc9847f7cbf539fa5e49b5649bcfe5f)(class ::clang::Type  const *) = ::clang::SubstTemplateTypeParmPackType::classof;
    class ::clang::QualType  (::clang::SubstTemplateTypeParmPackType::*method_pointer_ed510711462d5c0cbc0d2bd5d7a2deff)() const = &::clang::SubstTemplateTypeParmPackType::desugar;
    class ::clang::TemplateArgument  (::clang::SubstTemplateTypeParmPackType::*method_pointer_1c424703cd6f5dfe8013fd8d40d04259)() const = &::clang::SubstTemplateTypeParmPackType::getArgumentPack;
    class ::clang::TemplateTypeParmType  const * (::clang::SubstTemplateTypeParmPackType::*method_pointer_7ee0ee6057155c1b963c937871a99718)() const = &::clang::SubstTemplateTypeParmPackType::getReplacedParameter;
    bool  (::clang::SubstTemplateTypeParmPackType::*method_pointer_18c671809e015b95b5bc018753dc83f0)() const = &::clang::SubstTemplateTypeParmPackType::isSugared;
    boost::python::class_< class ::clang::SubstTemplateTypeParmPackType, autowig::HeldType< class ::clang::SubstTemplateTypeParmPackType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_8c3d682fda725ecaa6f62d0cc71e3761("SubstTemplateTypeParmPackType", "", boost::python::no_init);
    class_8c3d682fda725ecaa6f62d0cc71e3761.def("classof", method_pointer_fbc9847f7cbf539fa5e49b5649bcfe5f, "");
    class_8c3d682fda725ecaa6f62d0cc71e3761.def("desugar", method_pointer_ed510711462d5c0cbc0d2bd5d7a2deff, "");
    class_8c3d682fda725ecaa6f62d0cc71e3761.def("get_argument_pack", method_pointer_1c424703cd6f5dfe8013fd8d40d04259, "");
    class_8c3d682fda725ecaa6f62d0cc71e3761.def("get_replaced_parameter", method_pointer_7ee0ee6057155c1b963c937871a99718, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_8c3d682fda725ecaa6f62d0cc71e3761.def("is_sugared", method_pointer_18c671809e015b95b5bc018753dc83f0, "");
    class_8c3d682fda725ecaa6f62d0cc71e3761.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::SubstTemplateTypeParmPackType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::SubstTemplateTypeParmPackType >, autowig::HeldType< class ::clang::Type > >();
    }

}