#include "displayHome.hpp"

void display(Display& d) {
  d.display();
}

void displayHome() {
  DisplayDescription dd;
  display(dd);
  for(int i = 1; i < 2; i++) {
    DisplayTitle dt(i);
    display(dt);
  }
  DisplayHelpHome dhh;
  display(dhh);
}