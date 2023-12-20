#ifndef DISPLAYCONTENT_H
#define DISPLAYCONTENT_H

#include <iostream>
#include "displayChapter.hpp"
#include "../utils/createChapter.hpp"

class DisplayContent : public DisplayChapter {
public:
  DisplayContent(int index);
  void display() override;
};

#endif
