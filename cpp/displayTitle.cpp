#include "../header/displayTitle.hpp"

DisplayTitle::DisplayTitle(int i) : DisplayChapter(i) {}

void DisplayTitle::display() {
    Chapter* c = createChapter(index);
    c->outputTitle();
}