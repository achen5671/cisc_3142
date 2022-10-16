#include <iostream>
#include <string>

using namespace std;

int main () {
    // TODO: This is rough. Is there aternative?
    string num;
    int sum;
    cout << "Enter a positive number: " << endl;
    cin >> num;

    // Look into for range loop
    for(int i = 0; i < num.length(); i++){
        sum += (num[i] - '0');
    }

    cout << "Sum of digits of the number " << num <<  " is: " << sum - 1<< endl;
    return 0;
}
