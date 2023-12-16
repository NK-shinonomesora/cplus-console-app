#ifndef DISPLAYNEXT_H
#define DISPLAYNEXT_H

#include "../header/page.hpp"
#include "displayHome.hpp"
#include "../header/displayChapter.hpp"
#include "../header/displayContent.hpp"
#include "../header/displayHelp.hpp"
#include "../header/displayHelpHome.hpp"
#include "../header/displayHelpContent.hpp"
#include "../header/displayHelpSource.hpp"
#include "../header/displaySource.hpp"

void displayNext(Page& page);
void displayChapter(DisplayChapter* dc);
void displayHelp(DisplayHelp* dh);

#endif
