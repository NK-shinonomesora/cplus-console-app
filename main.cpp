#include <iostream>
#include <vector>
#include <string>
#include "header/display.hpp"
#include "header/page.hpp"
#include "header/rectangle.hpp"
#include "header/displayDescription.hpp"
#include "header/displayHelpHome.hpp"
#include "header/displayChapter.hpp"
#include "header/page.hpp"
#include "utils/displayHome.hpp"
#include "utils/waitUserInput.hpp"
#include "utils/changeState.hpp"
#include "utils/judgeIsExit.hpp"
#include "utils/displayNext.hpp"

int main() {
    Page page;
    displayHome();

    while(true) {
      waitUserInput(page);
      changeState(page);
      if(judgeIsExit(page)) break;
      displayNext(page);
    }

    std::cout << "アプリを終了しました。" << std::endl;
    return 0;
}
