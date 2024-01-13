#include "displayHome.hpp"

void display(Display& d) {
  d.display();
}

void displayHome() {
  DisplayDescription dd;
  DisplayHelpHome dhh;
  int num = getChapterNum();
  display(dd);
  for(int i = 1; i <= num; i++) {
    DisplayTitle dt(i);
    display(dt);
  }
  display(dhh);
}