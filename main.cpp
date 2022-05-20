#include "safeint.h"
#include <iostream>


int main() {
    SafeInt s1(5);
    SafeInt s2(10);
    SafeInt s3 = s1 + s2;
    std::cout << "s1 + s2" << s3 << std::endl;
    s3 = s1 - s2;
    std::cout << "s1 - s2" << s3 << std::endl;
    s3 = s1 * s2;
    std::cout << "s1 * s2" << s3() << std::endl;
    ++s3;
    std::cout << "++s3" << s3() << std::endl;
    return 0;
}
