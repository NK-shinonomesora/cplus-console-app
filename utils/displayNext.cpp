#include "displayNext.hpp"

void displayNext(Page& page) {
  int num = page.getNumber();
  Page::State state = page.getState();

  switch(state) {
    case Page::State::HOME:
      displayHome();
      break;
    case Page::State::CONTENT:
      displayChapter(new DisplayContent(num));
      break;
  }
}

void displayChapter(DisplayChapter* dc) {
  dc->display();
}
