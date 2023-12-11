#include <iostream>
#include "../header/displayHelpHome.hpp"

void DisplayHelpHome::display() {
  std::cout << "-------------------------------------------------------------------------" << std::endl;
  std::cout << "0: アプリを終了する。 1〜N: コンテンツを閲覧する。" << std::endl;
}