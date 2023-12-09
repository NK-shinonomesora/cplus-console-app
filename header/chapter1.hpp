#ifndef CHAPTER1_H
#define CHAPTER1_H

#include "chapterImpl.hpp"

class Chapter1 : public ChapterImpl {
public:
  Chapter1(int id, string title, string contentPath, string sourcePath);
};

#endif