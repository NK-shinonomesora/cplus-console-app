#ifndef CHAPTERIMPL_H
#define CHAPTERIMPL_H

#include "chapter.hpp"
#include "reader.hpp"

class ChapterImpl : public Chapter, public Reader {
public:
  ChapterImpl(int id, string title, string contentPath, string sourcePath);
  int getId() override;
  void outputTitle() override;
  void outputContent() override;
  void outputSource() override;

private:
  int id;
  string title;
  string contentPath;
  string sourcePath;

  string getTitle();
};

#endif