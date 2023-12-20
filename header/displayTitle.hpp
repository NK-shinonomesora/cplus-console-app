#ifndef DISPLAYTITLE_H
#define DISPLAYTITLE_H

#include <iostream>
#include "displayChapter.hpp"
#include "../utils/createChapter.hpp"

class DisplayTitle : public DisplayChapter {
public:
  DisplayTitle(int index);
  void display() override;
};

#endif
