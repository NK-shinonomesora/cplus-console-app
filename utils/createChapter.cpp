#include "createChapter.hpp"

ChapterImpl* createChapter(int index) {
  switch(index) {
    case 1:
      return new ChapterImpl(1, "配列によるメモリ確保1", "./contents/chapter1.txt", "./sources/chapter1.source");
    case 2:
      return new ChapterImpl(2, "配列によるメモリ確保2", "./contents/chapter2.txt", "./sources/chapter2.source");
    case 3:
      return new ChapterImpl(3, "配列によるメモリ確保3", "./contents/chapter3.txt", "./sources/chapter3.source");
    case 4:
      return new ChapterImpl(4, "vectorによるメモリ確保", "./contents/chapter4.txt", "./sources/chapter4.source");
    case 5:
      return new ChapterImpl(5, "クラスのインスタンス", "./contents/chapter5.txt", "./sources/chapter5.source");
    case 6:
      return new ChapterImpl(6, "クラスのインスタンス2", "./contents/chapter6.txt", "./sources/chapter6.source");
    case 7:
      return new ChapterImpl(7, "クラスのインスタンス3", "./contents/chapter7.txt", "./sources/chapter7.source");
    case 8:
      return new ChapterImpl(8, "デストラクタによるメモリの解放", "./contents/chapter8.txt", "./sources/chapter8.source");
    case 9:
      return new ChapterImpl(9, "関数の引数にオブジェクトを渡す", "./contents/chapter9.txt", "./sources/chapter9.source");
    case 10:
      return new ChapterImpl(10, "関数の引数にオブジェクトを渡す2", "./contents/chapter10.txt", "./sources/chapter10.source");
    case 11:
      return new ChapterImpl(11, "オブジェクトのコピー", "./contents/chapter11.txt", "./sources/chapter11.source");
    case 12:
      return new ChapterImpl(12, "コピーコンストラクタとコピー代入", "./contents/chapter12.txt", "./sources/chapter12.source");
    case 13:
      return new ChapterImpl(13, "ムーブコンストラクタとムーブ代入", "./contents/chapter13.txt", "./sources/chapter13.source");
  }
  return nullptr;
}