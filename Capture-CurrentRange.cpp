#include<iostream>
#include "capture-CurrentRnage.h"
using namespace std;

std::string ContentToBeWrittenToCSV(std::array<std::vector <int>,2>currentsampleVector)
{
    string ToCSVfile = "";
    string rangestring;
    for(int i=0; i<2;i++)
    {
    if(currentsampleVector[i].size() != 0)
    {
    rangestring= to_string(currentsampleVector[i].front())+"-"+to_string(currentsampleVector[i].back())+","+to_string(currentsampleVector[i].size())+"\n";
    ToCSVfile = ToCSVfile + rangestring;
    }
    }
  return ToCSVfile;
}

