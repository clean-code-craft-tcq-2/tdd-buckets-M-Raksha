#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file

#include "test/catch.hpp"

TEST_CASE("Finds what needs to be written to CSV file")
{
  int CurrentSample[2]={4,5};
  REQUIRE(ContentToBeWrittenToCSV(CurrentSample,2) == "4-5,2");
}