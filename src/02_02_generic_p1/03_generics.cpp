#include <iostream>


template <class T>
constexpr bool is_printable(...) { return false; }

template <class T, class = decltype(std::declval<std::ostream>() << std::declval<T>())>
constexpr bool is_printable(std::nullptr_t) { return true; }


struct NotPrintable {};


int main() {
    std::cout << std::boolalpha << is_printable<float>(nullptr) << std::endl;
    std::cout << std::boolalpha << is_printable<NotPrintable>(nullptr) << std::endl;
}