#include <iostream>
#include "../header/chapterImpl.hpp"

ChapterImpl::ChapterImpl(int i, string t, string p, string s)
  : id {i}, title {t}, contentPath {p}, sourcePath {s} {}

int ChapterImpl::getId() {
  return id;
}

string ChapterImpl::getTitle() {
  return title;
}

void ChapterImpl::outputTitle() {
  std::cout << getId() << "." << getTitle() << std::endl;
}

void ChapterImpl::outputContent() {
  read(contentPath);
}

void ChapterImpl::outputSource() {
  read(sourcePath);
}