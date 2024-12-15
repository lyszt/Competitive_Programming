#include <iostream>
using namespace std;

#define fast_io ios_base::sync_with_stdio(false); cin.tie(0);

// Constants
const double PI = 3.14159265358979323846;

// Function to check if a number is prime
bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; ++i)
        if (n % i == 0) return false;
    return true;
}

// Main function where you solve the problem
int main() {
    fast_io; // Optimize I/O
    int n;
    while(cin >> n) {
        cout << (n*2)*2<< endl;
    }


    return 0;
}
