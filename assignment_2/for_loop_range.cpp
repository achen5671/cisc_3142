#include <iostream>

using namespace std;

int main() {
  // Print range between lower and upper bound using a for loop
  int lower = 0, upper = 0;

  cout << "Enter bounds" << endl;
  cin >> lower >> upper;

  if (lower > upper) {
    int temp = lower;
    lower = upper;
    upper = temp;
  }

  for (int i = lower; i <= upper; i++) {
    cout << i << ", ";
  }
  return 0;
}
