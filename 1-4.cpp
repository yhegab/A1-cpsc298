#include <iostream>
using namespace std;
//calculates the change in cost over time due to inflation
int main(){
  float cost;
  float inflation;
  int years;
  cin >> cost;
  cin >> inflation;
  cin >> years;

  inflation = inflation / 100;
  inflation = inflation + 1;

  for(int i = 0; i < years; ++i){
    cost = cost * inflation;
  }
  cout << "The cost of your item after " << years << " years is approximately $" << cost << endl;
  return 0;
}
