#include <pybind11/pybind11.h>

int add(int i, int j) {
    return i + j;
}

int sub(int i, int j) {
    return i - j;
}

PYBIND11_MODULE(example, m) {
    m.doc() = "pybind11 example plugin"; // optional module docstring

    m.def("add", &add, "A function that adds two numbers");
    m.def("sub", &sub, "A function that subtracts two numbers");
}