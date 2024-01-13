#include "displayNext.hpp"

void displayNext(Page& page) {
  Page::State state = page.getState();

  switch(state) {
    case Page::State::HOME:
      displayHome();
      break;
    case Page::State::CONTENT:;
      display(new DisplayContent(page.getNumOnHome()));
      display(new DisplayHelpContent());
      break;
    case Page::State::SOURCE:
      display(new DisplaySource(page.getNumOnHome()));
      display(new DisplayHelpSource());
      break;
    case Page::State::EXIT:
      break;
  }
}
 
void display(Display* d) {
  d->display();
}