#ifndef PAGE_H
#define PAGE_H

class Page {
public:
  enum class State {
    HOME,
    EXIT,
    CONTENT,
    SOURCE
  };

  Page();
  int getNumber();
  void getInput(); //ユーザからの入力を受け取る
  State getState();
  void setState(Page::State);
  void change(); //ページを切り替える
  
private:
  int number;
  State state;

  void exit();
  void toHome();
  void toContent();
  void toSource();
};

#endif