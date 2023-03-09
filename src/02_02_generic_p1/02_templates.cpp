#include <cmath>
#include <iostream>
#include <string_view>
#include <typeinfo>


template <class T>
std::string_view WhatAmI(T&& value) {
    return typeid(T).name();
}


template <class T>
struct Vec {
    T x;
    T y;
    T z;

    auto Norm() { return std::hypot(std::hypot(x, y), z); }
};


int main() {
    Vec<int> ivec{1, 2, 3};
    Vec<float> fvec{1, 2, 3};
    Vec<double> dvec{1, 2, 3};

    std::cout << WhatAmI(ivec.Norm()) << std::endl;
    std::cout << WhatAmI(fvec.Norm()) << std::endl;
    std::cout << WhatAmI(dvec.Norm()) << std::endl;
}