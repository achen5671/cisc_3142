#include <iostream>

using namespace std;

int main() {
  // Print range between lower and upper bound using while loop
  int lower = 0, upper = 0;

  cout << "Enter bounds" << endl;
  cin >> lower >> upper;

  if (lower > upper) {
    int temp = lower;
    lower = upper;
    upper = temp;
  }

  int counter = lower;
  while (counter <= upper) {
    cout << counter << ", ";
    counter++;
  }

  return 0;
}
