#ifndef PROCESSOR_H
#define PROCESSOR_H

#include <string>
#include <vector>

using std::string;
using std::vector;

class Processor {
 private:
//steals many data points
  int previdle;
  int previowait;
  int prevuser;
  int prevnice;
  int prevsystem;
  int previrq;
  int prevsoftirq;
  int prevsteal;

  void AssignPrevValues(vector<double>);//stores the values
  vector<double> ReadFile();

 public:
  double Utilization();
};

#endif
