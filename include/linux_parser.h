#ifndef SYSTEM_PARSER_H
#define SYSTEM_PARSER_H
#include <fstream>
#include <regex>
#include <string>
#include "parser_helper.h"
using std::string;
using std::vector;

namespace LinuxParser {
// System
float MemoryUtilization();//retrieves memory usage
long UpTime();//retrieves system uptime
vector<int> Pids();//retrieves all active processes
int TotalProcesses();//retrieves number of processes
int RunningProcesses();//retrieves number of running processes
string OperatingSystem();//retrieves operating system specs
string Kernel();//retrieves linux kernel
string UserByUID(int);//Finds username

std::vector<string> CpuUtilization();
};  // namespace LinuxParser

#endif
