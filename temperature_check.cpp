#include <iostream>
#include <string>
#include <sstream>
#include <iostream>
#include <stdio.h>

using namespace std;

std::string exec(const char* cmd) {
  FILE* pipe = popen(cmd, "r");
  if (!pipe)
    return "ERROR";
  char buffer[128];
  std::string result = "";
  while(!feof(pipe)) {
    if(fgets(buffer, 128, pipe) != NULL)
      result += buffer;
  }
  pclose(pipe);
  return result;
}

int GetTemperature() {
  char cBuffer[256];
  float temperature;
  stringstream streamBuffer(exec("sensors"));
  while(!streamBuffer.eof()) {
    streamBuffer.getline(cBuffer,256);
    if(sscanf(cBuffer, "temp1: +%f°C", &temperature) > 0) {
      break;
    }
    if(sscanf(cBuffer, "Physical id 0: +%f°C", &temperature) > 0) {
      break;
    }
  }
  return (int) temperature;
}