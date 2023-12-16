#include <iostream>
#include "../header/displayHelpContent.hpp"

void DisplayHelpContent::display() {
  std::cout << "-------------------------------------------------------------------------" << std::endl;
  std::cout << "0: アプリを終了する。 1: ホームに戻る。 2: ソースコードを閲覧する。" << std::endl;
}