/*
--- ---
time: 21:16:55+06:00
date: Tue 21, Jan 2025
author: Mostafijul Islam
problem: https://codeforces.com/contest/2061/problem/A

*INPUT*
- ???

*QUESTION*
- ???
--- ---
*/

#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
  int t;
  std::cin >> t;
  while (t--) {
    int n;
    std::cin >> n;

    vector<long long int> a;
    for (int i = 0; i < n; i++) {
      int input;
      cin >> input;
      a.push_back(input);
    }

    sort(a.begin(), a.end());

    vector<long long int> sArr;
    for (int i = 0; i < n; i++) {
      long long int j = a[i];
      if (i % 2 == 0 && j % 2 != 0) {
        long long int x = j;
        for (int k = i + 1; k < n; k++) {
          int y = a[k];
          if (y % 2 == 0) {
            x = y;
            a[k] = j;
            a[i] = y;
            break;
          }
        }
        sArr.push_back(x);
      } else {
        sArr.push_back(j);
      }
    }
    
    long long int sum = 0;
    long long int pnt = 0;

    for (int i = 0; i < n; i++) {
      sum += sArr[i];

      if (sum % 2 == 0) {
        pnt++;
        while (sum % 2 == 0) {
          sum /= 2;
        }
      }
    }

    cout << pnt << endl;
  }
  return 0;
}