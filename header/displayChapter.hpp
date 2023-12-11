#ifndef DISPLAYCHAPTER_H
#define DISPLAYCHAPTER_H

#include "display.hpp"
#include "chapter.hpp"
#include "chapter1.hpp"
#include <vector>

class DisplayChapter : public Display {
public:
  DisplayChapter();
  void display() override;

private:
  std::vector<Chapter*> chapters;
};

#endif
