#include <cmath>
#include <iostream>
#include <string_view>
#include <typeinfo>


void PrintInteger(int value) {
    std::cout << value;
}

template <class T>
void Print(const T& value) {
    std::cout << value;
}

namespace hidden {

/*template <float>*/
void Print(const /*T*/ float& value) {
    std::cout << value;
}

} // namespace hidden


template <class T>
struct Vec {
    T x;
    T y;
    T z;

    auto Norm() { return std::hypot(std::hypot(x, y), z); }
};


int main() {
    PrintInteger(int(1));
    Print(float(1.0f));
    Print(int(1));
}