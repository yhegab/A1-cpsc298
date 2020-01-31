#include <iostream>
using namespace std;

//calculates the wages of the worker based on work hours, overtime hours, and taxes
//outputs gross pay and net pay, as well as the tax breakdown
int main(){

  float regHours = 40;
  float hours;
  float ss;
  float fit;
  float sit;
  float mi = 10;
  float wage;
  float net;
  cin >> hours;
  if(regHours >= hours)
    wage = hours * 16;
  else
    wage = regHours * 16 + ((hours - regHours) * 24);
  ss = wage * 0.06;
  fit = wage * 0.14;
  sit = wage * 0.05;
  net = wage - ss - fit - sit - mi;
  cout << "Gross pay: " << wage << endl;
  cout << "Social Security: " << ss << endl;
  cout << "Federal income tax: " << fit << endl;
  cout << "State income tax: " << sit << endl;
  cout << "Net pay: " << net << endl;
  return 0;
}
