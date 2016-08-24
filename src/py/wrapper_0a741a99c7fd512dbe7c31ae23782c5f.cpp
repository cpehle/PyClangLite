#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = T*; }

namespace autowig
{
}


void wrapper_0a741a99c7fd512dbe7c31ae23782c5f()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    bool  (*method_pointer_e00f57ac82db557a96a58a994364a652)(class ::clang::Decl  const *) = ::clang::ValueDecl::classof;
    bool  (*method_pointer_4682c68da9be5f03a8c89fcc555c015a)(enum ::clang::Decl::Kind ) = ::clang::ValueDecl::classofKind;
    class ::clang::QualType  (::clang::ValueDecl::*method_pointer_d28fbd002c835eb0b6e7e3e1b599be93)() const = &::clang::ValueDecl::getType;
    bool  (::clang::ValueDecl::*method_pointer_e6457cc4c72c5dcfb84a66899a9dc4dd)() const = &::clang::ValueDecl::isWeak;
    void  (::clang::ValueDecl::*method_pointer_ba78db0aeeb253f4a7ac9bedfbc93136)(class ::clang::QualType ) = &::clang::ValueDecl::setType;
    boost::python::class_< class ::clang::ValueDecl, autowig::HeldType< class ::clang::ValueDecl >, boost::python::bases< class ::clang::NamedDecl >, boost::noncopyable > class_0a741a99c7fd512dbe7c31ae23782c5f("ValueDecl", "", boost::python::no_init);
    class_0a741a99c7fd512dbe7c31ae23782c5f.def("classof", method_pointer_e00f57ac82db557a96a58a994364a652, "");
    class_0a741a99c7fd512dbe7c31ae23782c5f.def("classof_kind", method_pointer_4682c68da9be5f03a8c89fcc555c015a, "");
    class_0a741a99c7fd512dbe7c31ae23782c5f.def("get_type", method_pointer_d28fbd002c835eb0b6e7e3e1b599be93, "");
    class_0a741a99c7fd512dbe7c31ae23782c5f.def("is_weak", method_pointer_e6457cc4c72c5dcfb84a66899a9dc4dd, "");
    class_0a741a99c7fd512dbe7c31ae23782c5f.def("set_type", method_pointer_ba78db0aeeb253f4a7ac9bedfbc93136, "");
    class_0a741a99c7fd512dbe7c31ae23782c5f.staticmethod("classof_kind");
    class_0a741a99c7fd512dbe7c31ae23782c5f.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::ValueDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::ValueDecl >, autowig::HeldType< class ::clang::NamedDecl > >();
    }

}