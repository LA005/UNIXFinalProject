#ifndef NCURSES_DISPLAY_H
#define NCURSES_DISPLAY_H

#include <curses.h>

#include "process.h"
#include "system.h"

namespace NCursesDisplay {
void Display(System& system, int n = 10);//Draws display function
void DisplaySystem(System& system, WINDOW* window);//Displays info cpu,memory,process count,etc
void DisplayProcesses(std::vector<Process> processes, WINDOW* window, int n);//displays the running processes
std::string ProgressBar(float percent);// Turns them into a readable string
};  // namespace NCursesDisplay

#endif
