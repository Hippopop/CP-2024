#include <cmath>
#include <iostream>
#include <ostream>

int main() {
  int t;
  std::cin >> t;
  while (t--) {
    int n;
    std::cin >> n;

    long long sum;

    if (n % 2 == 0) {
      sum = ((long double)n / 2) * (n + 1);
    } else {
      sum = ((long double)(n + 1) / 2) * (n);
    }

    std::cout << sum << std::endl;

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