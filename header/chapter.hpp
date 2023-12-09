#ifndef CHAPTER_H
#define CHAPTER_H

#include <string>
using std::string; 

class Chapter {
public:
  virtual int getId() = 0;
  virtual void outputTitle() = 0; //タイトルをコンソールに出力
  virtual void outputContent() = 0; //読み取ったコンテンツファイルをコンソールに出力
  virtual void outputSource() = 0; //読み取ったソースファイルをコンソールに出力
};

#endif