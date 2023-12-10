#ifndef DISPLAY_H
#define DISPLAY_H

#include <vector>
#include "chapter.hpp"
#include "chapter1.hpp"
#include "page.hpp"

class Display {
public:
  Display();
  void home(); //ホーム画面を表示する
  void contentBy(int id); //idに対応したchapterのコンテンツを出力

private:
  std::vector<Chapter*> chapters;

  void description(); //アプリの説明を出力
  void titles(); //タイトル一覧を出力
  void homeFooter(); //ホーム画面に対応した操作ヘルプを出力
  void contentFooter(); //コンテンツ画面に対応したヘルプを出力
};

#endif