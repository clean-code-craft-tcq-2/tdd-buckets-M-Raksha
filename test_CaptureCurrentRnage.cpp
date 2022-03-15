#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file

#include "catch.hpp"
#include "capture-CurrentRnage.h"

TEST_CASE("Finds what needs to be written to CSV file")
{
 /*samples = {4,5}*/
  std::array<std::vector <int>,2>currentRangeVector;
  currentRangeVector[0].push_back(4);
  currentRangeVector[0].push_back(5); 
  std::string expectedoutput= "4-5,2\n";
  REQUIRE(ContentToBeWrittenToCSV(currentRangeVector) == expectedoutput);
  
  /*samples = {4,5,7,8,9}*/
  currentRangeVector[1].push_back(7);
  currentRangeVector[1].push_back(8);
  currentRangeVector[1].push_back(9);
  expectedoutput= "4-5,2\n7-9,3\n";
  REQUIRE(ContentToBeWrittenToCSV(currentRangeVector) == expectedoutput);
}

TEST_CASE("split the array into most often occured current ranges and return as vectors for single range input")
{
  int currentsample[2] = {4,5};
  auto ranges= findCurrentRange(currentsample,2);
  //REQUIRE(ranges[0].front()==4);
  //REQUIRE(ranges[0].back()==5);
  REQUIRE(ranges[0].size()==2);
  REQUIRE(ranges[1].size()==0);
}

TEST_CASE("split the array into most often occured current ranges and return as vectors for 2 range input")
{
 int currentsample[5] = {4,5,7,8,9};
 auto ranges= findCurrentRange(currentsample,5);
 //REQUIRE(ranges[0].front()==4);
 //REQUIRE(ranges[0].back()==5);
 REQUIRE(ranges[0].size()==2);
 
 //REQUIRE(ranges[1].front()==7);
 //REQUIRE(ranges[1].back()==9);
 REQUIRE(ranges[1].size()==3);
}
