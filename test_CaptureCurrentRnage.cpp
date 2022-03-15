#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file

#include "catch.hpp"
#include "capture-CurrentRnage.h"

TEST_CASE("Finds what needs to be written to CSV file")
{
 /*samples = {4,5}*/
  std::array<vector <int>,2>currentRangeVector;
  currentRangeVector[0].push_back(4);
  currentRangeVector[0].push_back(5); 
  std::string expectedoutput= "4-5,2";
  REQUIRE(ContentToBeWrittenToCSV(currentRangeVector) == expectedoutput);
  
  /*samples = {4,5,7,8,9}*/
  currentRangeVector[1].push_back(7);
  currentRangeVector[2].push_back(8);
  currentRangeVector[2].push_back(9);
  expectedoutput= "4-5,2\n7-9,3";
  REQUIRE(ContentToBeWrittenToCSV(currentRangeVector) == expectedoutput);
}
