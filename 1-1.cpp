#include <iostream>
using namespace std;

//calculates how many boxes are required to hold 1 ton of cereal
//also calculates how many tons of cereal one box of cereal can hold
//calculates this value based on user input.
int main() {
  float box;
  cin >> box;

  float tons = box / 35273.92;
  float numBoxes = 35273.92 / box;

  cout << "Each box can hold " << tons << " metric tons of cereal." << endl;
  cout << "One metric ton of cereal requires " << numBoxes << " cereal boxes" << endl;

  return 0;
}
