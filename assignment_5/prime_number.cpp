#include <iostream>
#include <vector>

using namespace std;

bool isPrime(int num) {
    for (int i = 2; i <= num / 2; i++) {
        if(num % i == 0) {
            return false;
        }
    }
    
    return true;
}

int main () {
    // Print all prime number between 3 and 100
    vector<int> primes;
    
    for(int i = 3; i < 101; ++i) {
        bool _isPrime = isPrime(i);
        if (_isPrime) {
            primes.push_back(i);
        }
    }

    cout << "Prime numbers between 3 and 100 are: ";
    for(int i = 0; i < primes.size(); ++i) {
        cout << primes[i] << ", ";
    }

    return 0;
}