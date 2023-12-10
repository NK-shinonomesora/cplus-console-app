#include <iostream>
#include "../header/display.hpp"

Display::Display() {
  chapters.push_back(new Chapter1(1, "test title", "./contents/chapter1.txt", "sources/chapter1.source"));
}

void Display::home() {
  description();
  titles();
  homeFooter();
}

void Display::description() {
  std::cout << std::endl;
  std::cout << "++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++" << std::endl;
  std::cout << "+              C++におけるメモリ学習アプリです。                      +" << std::endl;
  std::cout << "++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++" << std::endl;
  std::cout << std::endl;
}

void Display::titles() {
  for(auto c : chapters) {
    c->outputTitle();
  }
}

void Display::contentBy(int id) {
  for(auto c : chapters) {
    if(c->getId() == id) c->outputContent();
    break;
  }
  contentFooter();
}

void Display::homeFooter() {
  std::cout << "-------------------------------------------------------------------------" << std::endl;
  std::cout << "0: アプリを終了する。 1〜N: コンテンツを閲覧する。" << std::endl;
}

void Display::contentFooter() {
  std::cout << "-------------------------------------------------------------------------" << std::endl;
  std::cout << "0: アプリを終了する。 1: ホームに戻る 2: ソースコードを閲覧する。" << std::endl;
}