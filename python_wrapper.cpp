#include <pybind11/pybind11.h>

bool file_exists(const std::string& filename); // Forward declaration

namespace py = pybind11;

PYBIND11_PLUGIN(file_checker) {
    py::module m("file_checker", "File existence checker using C++ std::filesystem");

    m.def("file_exists", &file_exists, "Check if file exists");

    return m.ptr();
}

// PYBIND11_MODULE(file_checker, m) {
//     m.doc() = "File existence checker using C++ std::filesystem";
//     m.def("file_exists", &file_exists, "Check if file exists");
// }
