#include <iostream>
#include <vector>
#include <string>

using namespace std;

// NOTE: Program does NOT validate input!

int main() {
  double cost;
  int year;
  double inflation_rate;

  // Look into getline() function. is there a better way to do this?
  cout << "Enter pencil price: " << endl;
  cin >> cost;
  cout << "Enter # of years from now: " << endl;
  cin >> year;
  cout << "Enter inflation rate: " << endl;
  cin >> inflation_rate;

  // Is there a better way to do this
  inflation_rate /= 100;

  for(int i = 0; i < year; i++) {
    double adjusted_cost = cost * inflation_rate;
    cost += adjusted_cost;
  }

  cout << "Pencil price in " << year << " will be $" << cost << endl;

  return 0;
}
