#include <iostream>
#include "ncurses_display.h"
#include "system.h"
#include "process.h"



int main() {//runs the code
  System system;
  NCursesDisplay::Display(system, 20);
}
