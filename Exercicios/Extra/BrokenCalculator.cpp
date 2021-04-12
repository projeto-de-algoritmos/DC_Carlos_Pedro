#include<iostream>

using namespace std;

int brokenCalc(int X, int Y){

  if(X < Y) {
       return (Y % 2 == 1) ? 
       (1 + brokenCalc(X, Y+1)) : 
       (1 + brokenCalc(X, Y/2));
  }

  else return X-Y;

}

int main() {
  int X, Y;

  cin >> X >> Y;

  int result = brokenCalc(X,Y);

  cout << result << "\n";

}