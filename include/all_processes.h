#ifndef ALL_PROCESSES_H
#define ALL_PROCESSES_H
#include "process.h"
#include <string>
#include <vector>
using std::string;
using std::vector;

class All_Processes {
 private:
  long Hertz; //sys tick rate
  vector<int> current_pids_;
  vector<Process> all_processes_;

  void UpdateProcesses();
  void AddNewProcesses(bool&);//detects new processes
  vector<int> ReadFolders();//reads process directories
  void RemoveFinishedProcesses(bool&);//removes processes when completed

 public:
  All_Processes();//allows tracking structures and system timing
  vector<Process>& GetProcesses();//returns vectors of tracket processes
};

#endif
