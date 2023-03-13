#include <iostream>


template <class... Args>
void PrintWithFold(const Args&... args) {
    (..., (std::cout << args << " "));
}


void PrintWithRecursion() {}


template <class Head, class... Rest>
void PrintWithRecursion(const Head& head, const Rest&... rest) {
    std::cout << head << " ";
    return PrintWithRecursion(rest...);
}


int main() {
    PrintWithFold(1, 2, 3);
    std::cout << std::endl;
    PrintWithRecursion(1, 2, 3);
    std::cout << std::endl;
}
