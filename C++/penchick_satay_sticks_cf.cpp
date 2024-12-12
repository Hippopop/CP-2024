#include <iostream>
using namespace std;

void _sortArray(int arr[], int length) {
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
  cin >> t;
  while (t--) {
    int l;
    cin >> l;
    int array[l];
    for (int i = 0; i < l; i++) {
      cin >> array[i];
    }
    _sortArray(array, l);
    bool possible = true;
    for (int i = 1; i < l; i++) {
      if (array[i] < array[i - 1]) {
        possible = false;
        break;
      }
    }

    if (possible) {
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }
  }

  return 0;
}
