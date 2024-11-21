/*
--- ---
time: 23:05:00+06:00
date: Thu 21, Nov 2024
author: Mostafijul Islam
problem: https://codeforces.com/contest/598/problem/A

*INPUT*
- The first line of the input contains a single integer t (1 ≤ t ≤ 100) — the number of values of n to be processed.
Each of next t lines contains a single integer n (1 ≤ n ≤ 109).

*QUESTION*
- In this problem you are to calculate the sum of all integers from 1 to n, but you should take all powers of two with minus in the sum.
For example, for n = 4 the sum is equal to  - 1 - 2 + 3 - 4 =  - 4, because 1, 2 and 4 are 20, 21 and 22 respectively.
Calculate the answer for t values of n.
--- ---
*/

#include <cmath>
#include <iostream>

int main() {
  int t;
  std::cin >> t;
  while (t--) {
    int n;
    std::cin >> n;

    long long sum;

    if (n % 2 == 0) {
      sum = ((long long)n / 2) * (n + 1);
    } else {
      sum = ((long long)(n + 1) / 2) * (n);
    }

    for (int i = 0; i < n; i++) {
      long num = pow(2, i);
      if (num > n) {
        break;
      }
      sum -= (num * 2);
    }

    std::cout << sum << std::endl;
  }
  return 0;
}