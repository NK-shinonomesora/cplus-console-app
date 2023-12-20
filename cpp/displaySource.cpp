#include  "../header/displaySource.hpp"

DisplaySource::DisplaySource(int i) : DisplayChapter(i) {}

void DisplaySource::display() {
  Chapter* c = createChapter(index);
  c->outputSource();
}