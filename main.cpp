#include <iostream>
#include "header/display.hpp"

// void func(int n) {
//     std::cout << "m1を作成しました。";
//     std::cin.get();  // Wait for user to press Enter
// }

int main() {
    Display d;
    d.outputDescription();
    d.outputTitles();
    d.outputContentBy(1);

    return 0;
}
