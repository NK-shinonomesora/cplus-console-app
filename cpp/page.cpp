#include <iostream>
#include "../header/page.hpp"

Page::Page() : number {-1}, state {State::HOME} {}

int Page::getNumber() {
  return number;
}

void Page::getInput() {
  std::cin >> number;
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
      number == 0 ? exit() : toContent();
      break;
    case State::CONTENT:
      number == 0 ? exit() : number == 1 ? toHome() : toSource();
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
