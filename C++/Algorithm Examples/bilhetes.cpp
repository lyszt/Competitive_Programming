#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

#define fast_io ios_base::sync_with_stdio(false); cin.tie(0);

// Constants
const int INF = INT_MAX;
const long long LINF = LLONG_MAX;
const int MOD = 1e9 + 7;
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
    int original, people_amount = -1;
    while ((cin >> original >> people_amount) && (original != 0) && (people_amount != 0)) {
        int count = 0;
        if (original == 0 && people_amount == 0) {
            break;
        }
        vector<int> tickets;

        for (int i = 0; i < people_amount; i++) {
            int ticket_number;
            cin >> ticket_number;
            tickets.push_back(ticket_number);
        }
        set<int> verifier;
        set<int> blocker;
        for (auto it = tickets.begin(); it < tickets.end(); ++it) {
            if (!verifier.contains(*it)) {
                verifier.insert(*it);
            } else if (!blocker.contains(*it)){
                count++;
                blocker.insert(*it);
            }
        }
        cout << count << endl;

    }
    return 0;
}
