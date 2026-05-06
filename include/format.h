#ifndef FORMAT_H
#define FORMAT_H

#include <string>

namespace Format {
std::string Format(int);//converts int into string
std::string ElapsedTime(long times);//converts time 
std::string KBisMB(float kb);//converts size from KB to MB
};  // namespace Format

#endif
