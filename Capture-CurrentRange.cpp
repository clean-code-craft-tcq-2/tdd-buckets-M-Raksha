#include<iostream>
#include "capture-CurrentRnage.h"
using namespace std;

std::array<vector <int>,2> findCurrentRange(int* arrayofCurrentSample,  int numberofsamples)
{
   std::array<vector <int>,2> currentranges;
    int index;
    int numberofranges =0;
    
    currentranges[numberofranges].push_back(arrayofCurrentSample[0]);
    
    for(index=1; index<numberofsamples;index++)
    {
        if((arrayofCurrentSample[index]- arrayofCurrentSample[index-1]) == 1)
        {
            currentranges[numberofranges].push_back(arrayofCurrentSample[index]);
            
        }
        
        else
        {
            
            numberofranges++;
            currentranges[numberofranges].push_back(arrayofCurrentSample[index]);
           
        }
    }
    
    return currentranges;
}

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


std::string CaptureMostOftenChargingCurentRanges(int *currentsample, int numberofsamples)
{
    string CSVfileContent;
    auto CurrentrangeVectors = findCurrentRange(currentsample,numberofsamples);
    CSVfileContent = ContentToBeWrittenToCSV(CurrentrangeVectors);
    return CSVfileContent;
}

