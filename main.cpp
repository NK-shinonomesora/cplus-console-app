#include <iostream>
#include "header/display.hpp"
#include "header/page.hpp"
#include <vector>
#include <string>
#include "header/rectangle.hpp"
#include "header/displayDescription.hpp"
#include "header/displayHelpHome.hpp"
#include "header/displayChapter.hpp"

void func(Display& d) {
    d.display();
}

int main() {
    // Display d;
    // Page p;

    // d.home();

    // while(true) {
    //   p.getInput();
    //   Page::State state = p.getState();
    //   if(state == Page::State::EXIT) break;
    //   state == Page::State::HOME ? d.home() : d.contentBy(p.getNumber());
    // }

    // std::cout << "アプリを終了しました。" << std::endl;
    DisplayDescription dd;
    DisplayHelpHome dh;
    DisplayChapter dc;
    func(dd);
    func(dc);
    func(dh);

    return 0;
}
