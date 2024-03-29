#ifndef DISPLAYSOURCE_H
#define DISPLAYSOURCE_H

#include <iostream>
#include "displayChapter.hpp"
#include "../utils/createChapter.hpp"

class DisplaySource : public DisplayChapter {
public:
  DisplaySource(int index);
  void display() override;
};

#endif
