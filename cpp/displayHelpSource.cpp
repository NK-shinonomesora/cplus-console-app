#include <iostream>
#include "../header/displayHelpSource.hpp"

void DisplayHelpSource::display() {
  std::cout << "-------------------------------------------------------------------------" << std::endl;
  std::cout << "0: アプリを終了する。 1: ホームに戻る。 2: コンテンツに戻る。" << std::endl;
}