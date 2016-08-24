#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = T*; }

namespace autowig
{
}


void wrapper_7f94615a46d751afa71bfa020eacfecb()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    bool  (::clang::ObjCContainerDecl::*method_pointer_2929a3aedf365c088ca671ccda3aecf5)(class ::clang::ObjCPropertyDecl  const *) const = &::clang::ObjCContainerDecl::HasUserDeclaredSetterMethod;
    class ::clang::ObjCContainerDecl  * (*method_pointer_9de8289e24875966aef69deb0205bdb9)(class ::clang::DeclContext  const *) = ::clang::ObjCContainerDecl::castFromDeclContext;
    class ::clang::DeclContext  * (*method_pointer_e5df04cf66a358a5b325241bc1535d4a)(class ::clang::ObjCContainerDecl  const *) = ::clang::ObjCContainerDecl::castToDeclContext;
    bool  (*method_pointer_9bc5f931631b5eeeb57e85fe436795de)(class ::clang::Decl  const *) = ::clang::ObjCContainerDecl::classof;
    bool  (*method_pointer_3a2ddf5e3f735f9ab0146a7356159c75)(enum ::clang::Decl::Kind ) = ::clang::ObjCContainerDecl::classofKind;
    class ::clang::SourceLocation  (::clang::ObjCContainerDecl::*method_pointer_4f1feceb81cc55bda00410df71b97404)() const = &::clang::ObjCContainerDecl::getAtStartLoc;
    void  (::clang::ObjCContainerDecl::*method_pointer_3e80e5c3c5985dfb8080a6e497185972)(class ::clang::SourceLocation ) = &::clang::ObjCContainerDecl::setAtStartLoc;
    boost::python::class_< class ::clang::ObjCContainerDecl, autowig::HeldType< class ::clang::ObjCContainerDecl >, boost::python::bases< class ::clang::NamedDecl, class ::clang::DeclContext >, boost::noncopyable > class_7f94615a46d751afa71bfa020eacfecb("ObjCContainerDecl", "", boost::python::no_init);
    class_7f94615a46d751afa71bfa020eacfecb.def("has_user_declared_setter_method", method_pointer_2929a3aedf365c088ca671ccda3aecf5, "");
    class_7f94615a46d751afa71bfa020eacfecb.def("cast_from_decl_context", method_pointer_9de8289e24875966aef69deb0205bdb9, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7f94615a46d751afa71bfa020eacfecb.def("cast_to_decl_context", method_pointer_e5df04cf66a358a5b325241bc1535d4a, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7f94615a46d751afa71bfa020eacfecb.def("classof", method_pointer_9bc5f931631b5eeeb57e85fe436795de, "");
    class_7f94615a46d751afa71bfa020eacfecb.def("classof_kind", method_pointer_3a2ddf5e3f735f9ab0146a7356159c75, "");
    class_7f94615a46d751afa71bfa020eacfecb.def("get_at_start_loc", method_pointer_4f1feceb81cc55bda00410df71b97404, "");
    class_7f94615a46d751afa71bfa020eacfecb.def("set_at_start_loc", method_pointer_3e80e5c3c5985dfb8080a6e497185972, "");
    class_7f94615a46d751afa71bfa020eacfecb.staticmethod("classof_kind");
    class_7f94615a46d751afa71bfa020eacfecb.staticmethod("classof");
    class_7f94615a46d751afa71bfa020eacfecb.staticmethod("cast_from_decl_context");
    class_7f94615a46d751afa71bfa020eacfecb.staticmethod("cast_to_decl_context");

    if(std::is_class< autowig::HeldType< class ::clang::ObjCContainerDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::ObjCContainerDecl >, autowig::HeldType< class ::clang::NamedDecl > >();
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::ObjCContainerDecl >, autowig::HeldType< class ::clang::DeclContext > >();
    }

}