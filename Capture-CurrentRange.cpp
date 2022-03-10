#include<iostream>
using namespace std;

string ContentToBeWrittenToCSV(int *currentsample, int numberOfSample)
{
    string ToCSVfile = to_string(currentsample[0])+"-"+to_string(currentsample[numberOfSample-1])+","+to_string(numberOfSample);
    
    return ToCSVfile;
}
