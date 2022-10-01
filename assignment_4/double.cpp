#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
  vector<int> int_arry= {1,2,3,4,5,6,7,8};

  for(int i : int_arry) {
    cout << i * 2 << endl;
  }

  return 0;
}
