#ifndef DISPLAY_H
#define DISPLAY_H

#include <vector>
#include "chapter.hpp"
#include "chapter1.hpp"

class Display {
public:
  Display();
  void outputDescription(); //アプリの説明をコンソールに出力
  void outputTitles(); //タイトル一覧をコンソールに出力
  void outputContentBy(int id); //idに対応したchapterのコンテンツを出力

private:
  std::vector<Chapter*> chapters;
};

#endif