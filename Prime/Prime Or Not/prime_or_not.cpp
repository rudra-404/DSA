#include <iostream>
using namespace std;

bool PrimeChecking(int n) {
    bool isPrime = true;
    if (n < 2 || (n > 2 && n%2 == 0)) {
        isPrime = false;
    } else {
        for (int i=3; i*i <= n; i+=2) {
            if (n%i == 0) {
                isPrime = false;
                break;
            }
        }
    }
    return isPrime;
}

int main() {
    cout << "Checking An Integer Number Is A Prime Or Not" << endl;
    int number;
    cout << "Enter an Integer Number >>> ";
    cin >> number;
    if (PrimeChecking(number)) {
        cout << number << " is a Prime Number" << endl;
    } else {
        cout << number << " is NOT a Prime Number" << endl;
    }
    return 0;
}