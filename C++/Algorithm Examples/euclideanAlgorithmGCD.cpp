#include <iostream>
using namespace std;

#define fast_io ios_base::sync_with_stdio(false); cin.tie(0);

// Constants
const double PI = 3.14159265358979323846;

// Function to check if a number is prime
int euclideanAlgorithm(int a, int b) {
    if(b == 0) {
        return a;
    }
    return euclideanAlgorithm(b, a%b);
}

// Main function where you solve the problem
int main() {
    fast_io; // Optimize I/O
    int n;
    cin >> n;
    for(int j = 0; j < n; j++) {
        int n1, n2;
        int gcd = -1;
        cin >> n1 >> n2;
        cout << euclideanAlgorithm(n1,n2) << endl;

    }
    return 0;
}
