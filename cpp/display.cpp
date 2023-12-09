#include <iostream>
#include "../header/display.hpp"

Display::Display() {
  chapters.push_back(new Chapter1(1, "test title", "./contents/chapter1.txt", "sources/chapter1.source"));
}

void Display::outputDescription() {
  std::cout << "C++におけるメモリ学習アプリです。" << std::endl;
}

void Display::outputTitles() {
  for(auto c : chapters) {
    c->outputTitle();
  }
}

void Display::outputContentBy(int id) {
  for(auto c : chapters) {
    if(c->getId() == id) c->outputContent();
  }
}