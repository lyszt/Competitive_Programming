
# Competitive Programming Base Repository

This repository serves as a starting point for competitive programming. It contains a base C++ template, helpful tips, and common tricks that you can use while solving problems in contests.

It also has contest and problems solutions that have been made by myself. Don't give them too much attention. I'm pretty bad at this stuff.
## Table of Contents

1. [Getting Started](#getting-started)
2. [Tips and Tricks](#tips-and-tricks)
3. [Useful Algorithms](#useful-algorithms)
4. [Common Data Structures](#common-data-structures)
5. [C++ Template](#cpp-template)
6. [Additional Resources](#additional-resources)

---

## Getting Started

1. **Clone the repository**:
   ```bash
   git clone https://github.com/yourusername/competitive-programming.git
   cd competitive-programming
   ```

2. **Set up your environment**:
   - Make sure you have a C++ compiler installed. For example, you can use `g++`.
   - You can use IDEs like **Visual Studio Code**, **CLion**, or **Code::Blocks**, or editors like **Sublime Text** and **Vim**.

---

## Tips and Tricks

- **Use fast input/output**:
   - In competitive programming, input/output can be slow. To optimize it, use the following line to speed up `cin` and `cout`:
     ```cpp
     ios_base::sync_with_stdio(false); cin.tie(0);
     ```

- **Modulo arithmetic**:  
  Always remember to use `MOD = 1e9 + 7` when you are dealing with large numbers to avoid overflow and to fit the answer within constraints.

- **Use macros to avoid repetition**:
  Define commonly used code snippets as macros to save time. For example:
  ```cpp
  #define pb push_back
  #define mp make_pair
  #define all(x) (x).begin(), (x).end()
  ```

- **Vector size**:  
  Always check if the size of a vector is non-zero before accessing it:
  ```cpp
  if (vec.size()) {
      // safe to access vec[0]
  }
  ```

- **Keep track of edge cases**:  
  Pay attention to edge cases like:
   - Small inputs (like empty arrays or arrays of size 1)
   - Large values for arrays or numbers
   - Negative values when not expected

- **Time complexity**:  
  Familiarize yourself with time complexity and always try to write algorithms that run within the given time limits (usually `O(N log N)` or better).

- **Practice on various problems**:  
  Try to solve problems on different platforms like:
   - **Codeforces**: For algorithmic challenges.
   - **LeetCode**: For data structures and system design problems.
   - **HackerRank**: For beginner-friendly problems.
   - **TopCoder**: For advanced challenges.

---

## Competitive Programming Websites and YouTubers

### Websites

1. **[Codeforces](https://codeforces.com/)**  
   One of the most popular platforms for competitive programming contests. Offers regular contests and a wide range of problems across various difficulty levels.

2. **[LeetCode](https://leetcode.com/)**  
   Great for preparing for coding interviews and improving problem-solving skills. Offers problems on algorithms, data structures, databases, and more.

3. **[AtCoder](https://atcoder.jp/)**  
   A Japanese platform known for hosting high-quality programming contests. Great for practicing algorithmic problems and improving your skills.

4. **[TopCoder](https://www.topcoder.com/)**  
   One of the oldest platforms in competitive programming. Known for its algorithmic challenges, marathon matches, and large community.

5. **[HackerRank](https://www.hackerrank.com/)**  
   Offers a large variety of problems, from basic coding to domain-specific areas like algorithms, AI, databases, and security.

6. **[CodeChef](https://www.codechef.com/)**  
   Provides both practice problems and monthly contests. Known for a large collection of problems across different topics and difficulty levels.

7. **[SPOJ](https://www.spoj.com/)**  
   Offers a huge collection of algorithmic problems, including the possibility to create your own problems. Useful for practicing diverse topics.

8. **[Exercism](https://exercism.io/)**  
   Focused on learning programming languages by solving real-world problems. It includes mentorship and community support.

9. **[Google Code Jam](https://codingcompetitions.withgoogle.com/)**  
   Google's flagship competitive programming event. Offers high-quality challenges and attracts programmers from around the world.

10. **[Kick Start](https://codingcompetitions.withgoogle.com/kickstart)**  
    Another Google competition, but designed for learners and beginners. It’s a great way to start getting involved in programming competitions.

---

### Competitive Programming YouTubers

1. **[William Lin](https://www.youtube.com/c/WilliamLin168)**  
   William Lin's channel is great for competitive programmers who are just starting out. He covers topics from basic algorithms to advanced competitive programming techniques and problem-solving strategies.

2. **[Codeforces Round Analysis](https://www.youtube.com/c/CodeforcesRoundAnalysis)**  
   This channel provides deep analyses of Codeforces contests, discussing problem-solving strategies and solutions in detail.

3. **[Errichto](https://www.youtube.com/c/Errichto)**  
   Errichto's channel covers algorithmic problem-solving, strategies for improving coding skills, and competitive programming tutorials. He also provides regular contest commentary.

4. **[BenQ](https://www.youtube.com/c/BenQ)**
   A channel that shares insights on algorithms, problem-solving strategies, and tutorials focused on competitive programming problems.

5. **[Gaurav Sen](https://www.youtube.com/c/GauravSen)**  
   Gaurav's channel focuses on systems design and data structures, making it useful for advanced competitive programmers looking to deepen their understanding of algorithmic efficiency.

6. **[The Coding Train](https://www.youtube.com/c/TheCodingTrain)**  
   Though more focused on creative coding and learning how to code, this channel has great tutorials on various computer science concepts that can aid competitive programming.

7. **[Tushar Roy](https://www.youtube.com/c/TusharRoy)**  
   Tushar’s channel provides solutions to algorithmic problems, helping programmers with a focus on interview questions and competitive programming topics.

8. **[Tech Dummies - Narendra L](https://www.youtube.com/c/TechDummiesNarendraL)**  
   Offers tutorials and problem-solving techniques for beginners to intermediates in competitive programming, as well as analysis of algorithms and solutions.

9. **[Rachit Jain](https://www.youtube.com/c/RachitJain)**  
   Rachit’s channel provides tutorials on algorithms and data structures, as well as code walkthroughs, problem-solving tips, and explanations of competitive programming concepts.

---

These websites and YouTubers are excellent resources to help you improve your competitive programming skills. Whether you're looking for regular practice, algorithm explanations, or in-depth contest analysis, these platforms will guide you on your journey to becoming a better competitive programmer.

## Useful Algorithms

### Sorting

- **QuickSort**: Average `O(n log n)`, worst `O(n^2)`
- **MergeSort**: Always `O(n log n)`
- **HeapSort**: `O(n log n)`

### Searching

- **Binary Search**:  
  Used for finding an element in a sorted array in `O(log n)` time.

### Graph Algorithms

- **Dijkstra's Algorithm**: For finding the shortest path from a source to all other nodes.
- **Floyd-Warshall Algorithm**: For finding all-pairs shortest paths.
- **DFS/BFS**: For graph traversal and pathfinding.

### Dynamic Programming

- **Knapsack Problem**: Classic dynamic programming problem where you choose items to maximize value without exceeding weight.
- **Longest Common Subsequence**: Find the longest subsequence that is common to two sequences.

---

## Common Data Structures

- **Vector**: Dynamic arrays.
- **Set/Map**: Useful for storing unique elements or key-value pairs.
- **Queue/Stack**: For implementing BFS/DFS or simulating stack-based algorithms.
- **Priority Queue (Heap)**: For maintaining the maximum or minimum element efficiently.
- **Deque**: Double-ended queue for efficient insertion/removal from both ends.

---

## C++ Template

Here’s a basic C++ template to get you started quickly:

```cpp
#include <bits/stdc++.h>
using namespace std;

// Type definitions
#define ll long long
#define ull unsigned long long
#define pb push_back
#define mp make_pair
#define f first
#define s second
#define all(x) (x).begin(),(x).end()
#define sz(x) (int)(x).size()
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
    
    // Input reading
    int n;
    cin >> n;
    
    // Example problem-solving logic
    vector<int> arr(n);
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    
    // Example for processing input:
    int sum = accumulate(all(arr), 0);
    cout << "Sum of elements: " << sum << endl;

    return 0;
}
```

---

## Additional Resources

- **GeeksforGeeks**: Comprehensive explanations and practice problems.
- **CP-Algorithms**: A collection of competitive programming algorithms with explanations and code.
- **TopCoder Tutorials**: In-depth tutorials for various algorithms and problem-solving techniques.

---

