#ifndef DISPLAYCHAPTER_H
#define DISPLAYCHAPTER_H

#include "display.hpp"

class DisplayChapter : public Display {
public:
  DisplayChapter(int index);
  virtual void display() = 0;

protected:
  int index;
};

#endif
