#include "../header/displayChapter.hpp"

DisplayChapter::DisplayChapter() {
  chapters.push_back(new Chapter1(1, "test title", "./contents/chapter1.txt", "sources/chapter1.source"));
}

void DisplayChapter::display() {
  for(auto chapter : chapters) {
    chapter->outputTitle();
  }
}