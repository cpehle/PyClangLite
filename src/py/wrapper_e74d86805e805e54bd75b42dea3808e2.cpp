#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = std::shared_ptr< T >; }

namespace autowig
{
}


void wrapper_e74d86805e805e54bd75b42dea3808e2()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    void  (::clang::CXXDestructorDecl::*method_pointer_2385ac0a5d285a538907f64eecc7dfe1)(class ::clang::FunctionDecl  *) = &::clang::CXXDestructorDecl::setOperatorDelete;
    bool  (*method_pointer_bd2a011ba98c5c82904e19fde60ce8e6)(class ::clang::Decl  const *) = ::clang::CXXDestructorDecl::classof;
    class ::clang::CXXDestructorDecl  * (*method_pointer_7caf2448b8165c699646d92f39e20e92)(class ::clang::ASTContext  &, unsigned int ) = ::clang::CXXDestructorDecl::CreateDeserialized;
    bool  (*method_pointer_8bbf0e2101545974be93046be4c1a360)(enum ::clang::Decl::Kind ) = ::clang::CXXDestructorDecl::classofKind;
    class ::clang::FunctionDecl  const * (::clang::CXXDestructorDecl::*method_pointer_5588dbf7ee74541f8d00292f042b7cc4)() const = &::clang::CXXDestructorDecl::getOperatorDelete;
    boost::python::class_< class ::clang::CXXDestructorDecl, autowig::HeldType< class ::clang::CXXDestructorDecl >, boost::python::bases< class ::clang::CXXMethodDecl >, boost::noncopyable > class_e74d86805e805e54bd75b42dea3808e2("CXXDestructorDecl", "", boost::python::no_init);
    class_e74d86805e805e54bd75b42dea3808e2.def("set_operator_delete", method_pointer_2385ac0a5d285a538907f64eecc7dfe1, "");
    class_e74d86805e805e54bd75b42dea3808e2.def("classof", method_pointer_bd2a011ba98c5c82904e19fde60ce8e6, "");
    class_e74d86805e805e54bd75b42dea3808e2.def("create_deserialized", method_pointer_7caf2448b8165c699646d92f39e20e92, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e74d86805e805e54bd75b42dea3808e2.def("classof_kind", method_pointer_8bbf0e2101545974be93046be4c1a360, "");
    class_e74d86805e805e54bd75b42dea3808e2.def("get_operator_delete", method_pointer_5588dbf7ee74541f8d00292f042b7cc4, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e74d86805e805e54bd75b42dea3808e2.staticmethod("classof_kind");
    class_e74d86805e805e54bd75b42dea3808e2.staticmethod("create_deserialized");
    class_e74d86805e805e54bd75b42dea3808e2.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::CXXDestructorDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::CXXDestructorDecl >, autowig::HeldType< class ::clang::CXXMethodDecl > >();
    }

}