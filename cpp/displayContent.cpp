#include  "../header/displayContent.hpp"

DisplayContent::DisplayContent(int i) : DisplayChapter(i) {}

void DisplayContent::display() {
  Chapter* c = createChapter(index);
  c->outputContent();
}