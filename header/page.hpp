#ifndef PAGE_H
#define PAGE_H

#include <string>
#include "display.hpp"
#include "displayDescription.hpp"
#include "displayHelpHome.hpp"
#include "../utils/chapterNum.hpp"

class Page {
public:
  enum class State {
    HOME,
    EXIT,
    CONTENT,
    SOURCE
  };

  Page();
  int getNumOnHome();
  int getNumOnContent();
  int getNumOnSource();
  void getInput(); //ユーザからの入力を受け取る
  State getState();
  void setState(Page::State);
  void change(); //ページの状態を変化させる
  
private:
  int numOnHome;
  int numOnContent;
  int numOnSource;
  State state;

  void exit();
  void toHome();
  void toContent();
  void toSource();
};

#endif