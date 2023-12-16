#include "displayNext.hpp"

void displayNext(Page& page) {
  Page::State state = page.getState();

  switch(state) {
    case Page::State::HOME:
      displayHome();
      break;
    case Page::State::CONTENT:;
      displayChapter(new DisplayContent(page.getNumOnHome()));
      displayHelp(new DisplayHelpContent());
      break;
    case Page::State::SOURCE:
      displayChapter(new DisplaySource(page.getNumOnHome()));
      displayHelp(new DisplayHelpSource());
      break;
    case Page::State::EXIT:
      break;
  }
}

void displayChapter(DisplayChapter* dc) {
  dc->display();
}

void displayHelp(DisplayHelp* dh) {
  dh->display();
}