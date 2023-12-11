#ifndef DISPLAYDESCRIPTION_H
#define DISPLAYDESCRIPTION_H

#include "display.hpp"
#include "rectangle.hpp"

class DisplayDescription : public Display, public Rectangle {
public:
  DisplayDescription();
  void display() override;

private:
  std::vector<std::string> description;
};

#endif