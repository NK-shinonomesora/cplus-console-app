#include <iostream>
#include "../header/page.hpp"

Page::Page() : numOnHome {-1}, numOnContent {-1},  numOnSource {-1}, state {State::HOME} {}

int Page::getNumOnHome() {
  return numOnHome;
}

int Page::getNumOnContent() {
  return numOnContent;
}

int Page::getNumOnSource() {
  return numOnSource;
}

void Page::getInput() {
  switch(state) {
    case State::HOME:
      std::cin >> numOnHome;
      break;
    case State::CONTENT:
      std::cin >> numOnContent;
      break;
    case State::SOURCE:
      std::cin >>  numOnSource;
    case State::EXIT:
      break;
  }
}

Page::State Page::getState() {
  return state;
}

void Page::setState(State s) {
  state = s;
}

void Page::change() {
  switch(state) {
    case State::HOME:
      numOnHome == 0 ? exit() : toContent();
      break;
    case State::CONTENT:
      numOnContent == 0 ? exit() : numOnContent == 1 ? toHome() : toSource();
      break;
    case State::SOURCE:
      numOnSource == 0 ? exit() : numOnSource == 1 ? toHome() : toContent();
      break;
    case State::EXIT:
      break;
  }
}

void Page::exit() {
  setState(State::EXIT);
}

void Page::toHome() {
  setState(State::HOME);
}

void Page::toContent() {
  setState(State::CONTENT);
}

void Page::toSource() {
  setState(State::SOURCE);
}
