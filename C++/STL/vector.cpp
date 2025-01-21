#include "bits/stdc++.h"
using namespace std;

int main() {
  /* Simple and efficient parts! */
  vector<int> simpleList = {1, 2, 3, 4, 5};
  simpleList.push_back(6); // Add at the end! *Basically add.
  for (auto v : simpleList)
    cout << v;
  simpleList.pop_back(); // Remove last!
  cout << simpleList.size() << endl; // Length of the list!
  cout << simpleList.capacity() << endl; // Expanded storage length of the list/array!

  /* Not so efficient parts! */
  
  return 0;
}