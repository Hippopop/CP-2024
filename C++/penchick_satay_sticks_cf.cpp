#include <iostream>

void _recursivelySortArray(int arr[], int length) {
  int l = -1, r = -1;
  for (int i = 1; i < length; i++) {
    int diff = arr[i - 1] - arr[i];
    if (diff == 1) {
      l = i - 1;
      r = i;

      // Swap and slide back!
      int temp = arr[r];
      arr[r] = arr[l];
      arr[l] = temp;
      i -= 2;
    }
  }
}

int main() {
  int t;
  std::cin >> t;
  while (t--) {
    int l;
    std::cin >> l;
    int array[l];
    for (int i = 0; i < l; i++) {
      std::cin >> array[i];
    }
    _recursivelySortArray(array, l);
    bool possible = true;
    for (int i = 1; i < l; i++) {
      if (array[i] < array[i - 1]) {
        possible = false;
        break;
      }
    }

    if (possible) {
      std::cout << "YES" << std::endl;
    } else {
      std::cout << "NO" << std::endl;
    }
  }

  return 0;
}
