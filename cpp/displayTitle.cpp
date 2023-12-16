#include "../header/displayTitle.hpp"

DisplayTitle::DisplayTitle(int i) : DisplayChapter(i) {}

void DisplayTitle::display() {
  switch(index) {
    case 1:
      Chapter1 c1(1, "chapter1", "./contents/chapter1.txt", "./sources/chapter1.source");
      c1.outputTitle();
      break;
  }
}