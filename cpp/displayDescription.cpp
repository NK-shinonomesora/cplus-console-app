#include <iostream>
#include "../header/displayDescription.hpp"

DisplayDescription::DisplayDescription() {
  description.push_back("");
  description.push_back("これはメモリを学習するためのアプリです。");
  description.push_back("閲覧したいコンテンツの番号を入力してください。");
  description.push_back("");
}

void DisplayDescription::display() {
  displayInRectangle(description, "*");
}