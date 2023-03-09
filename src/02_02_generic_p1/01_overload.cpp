#include <iostream>
#include <string_view>


std::string_view WhatAmI(float value) {
    return "I'm a float!";
}

std::string_view WhatAmI(int value) {
    return "I'm an int!";
}

std::string_view WhatAmIAdv(std::nullptr_t) {
    return "I'm a nullptr!";
}

std::string_view WhatAmIAdv(...) {
    return "I'm an anything!";
}

int main() {
    std::cout << WhatAmI(int(1)) << std::endl;
    std::cout << WhatAmI(float(1.0f)) << std::endl;

    std::cout << WhatAmIAdv(nullptr) << std::endl;
    std::cout << WhatAmIAdv(static_cast<const void*>(nullptr)) << std::endl;
}