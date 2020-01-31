#include <iostream>
using namespace std;


//determines whether meeting can continue based on capacity of the room
int main(int argc, char **argv){
  int capacity;
  int numPeople;
  cin >> capacity;
  cin >> numPeople;
  if(capacity > numPeople){
    cout << "The meeting can continue safely." << endl;
  }
  else{
    cout << "The meeting cannot be held as planned due to fire regulations. " << (numPeople - capacity) << " people need to leave in order for the meeting to continue as planned."<< endl;
  }
  return 0;
}
