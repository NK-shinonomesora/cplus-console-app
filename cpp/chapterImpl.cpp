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
  std::cout << std::endl;
  std::cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++" << std::endl;
  read(contentPath);
  std::cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++" << std::endl;
  std::cout << std::endl;
}

void ChapterImpl::outputSource() {
  std::cout << std::endl;
  std::cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++" << std::endl;
  read(sourcePath);
  std::cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++" << std::endl;
  std::cout << std::endl;
}