#pragma once
#include <vector>
#include <array>

std::string ContentToBeWrittenToCSV(std::array<std::vector <int>,2>currentsampleVector);
std::array<std::vector <int>,2> findCurrentRange(int* arrayofCurrentSample,  int numberofsamples);
