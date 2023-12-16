#include "judgeIsExit.hpp"

bool judgeIsExit(Page& page) {
  return page.getState() == Page::State::EXIT ? true : false;
}