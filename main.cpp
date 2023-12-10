#include <iostream>
#include "header/display.hpp"
#include "header/page.hpp"

int main() {
    Display d;
    Page p;

    d.home();

    while(true) {
      p.getInput();
      Page::State state = p.getState();
      if(state == Page::State::EXIT) break;
      state == Page::State::HOME ? d.home() : d.contentBy(p.getNumber());
    }

    std::cout << "アプリを終了しました。" << std::endl;

    return 0;
}
