#include <iostream>
#include "../header/rectangle.hpp"

void Rectangle::displayInRectangle(const vector<string> description, const string around) {
  int length = 0;

  for(auto d : description) {
    if(d.length() > length) length = d.length();
  }

  int width = (length * 0.67) + 4;  //0.67は日本語の長さに合わせて適当に設定

  for (int i = 0; i < width; ++i) {
      std::cout << around;
  }
  std::cout << std::endl;

  for(auto d : description) {
    int length2 = d.length();
    int width2 = length2 * 0.67;
    std::cout << around << " " << d;
    for(int i = 0; i < width - width2 - 3; i++) {
      std::cout << " ";
    }
    std::cout << around << std::endl;
  }

  for (int i = 0; i < width; ++i) {
      std::cout << around;
  }
  std::cout << std::endl;
}