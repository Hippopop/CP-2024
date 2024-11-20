/*
--- ---
time: 19:20:56+06:00
date: Tue 19, Nov 2024
author: Mostafijul Islam
problem: 

*INPUT*
- ???

*QUESTION*
- ???
--- ---
*/



#include <iostream>

int main() {
  int t;
  std::cin >> t;
  while (t--) {
    int l;
    std::cin >> l;

    int arr[l];
    for(int i = 0; i < l; i++) std::cin >> arr[i];

    int min = arr[0];
    for(int i = 1; i < l; i++) min &= arr[i];

    std::cout << min << std::endl;
  }
  return 0;
}
