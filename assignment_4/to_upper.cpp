#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
  // This is terrible with a O(nm) where n is the number of string and m is the str length.
  //    Is there a better way?
  vector<string> arry = {};
  int string_count = 8;

  cout << "Enter 8 strings" << endl;
  while (string_count > 0) {
    // Get user string input
    string str;
    string upper;

    getline(cin, str);

    for(char c : str) {
        upper+=toupper(c);
    }
    arry.push_back(upper);

    string_count--;
  }

  // This can be printed in the while loop without a vector
  //    but that's not what the assignment is asking so meh
  for (vector<string>::iterator t=arry.begin() ; t!=arry.end(); ++t) {
    cout << *t << endl;
  }

  return 0;
}
