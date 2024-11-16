/*
--- ---
time: 18:58:17+06:00
date: Sun 10, Nov 2024
author: Mostafijul Islam
problem: https://vjudge.net/problem/AtCoder-abc190_b

*INPUT*
- Input is given from Standard Input in the following format:
N S D
X1 Y1
.
.
Xn Yn

*QUESTION*
- Takahashi, the magician, is fighting with a monster. He can use N spells. The
i-th spell takes Xi seconds to cast and has a power Yi. However, the monster is
strong enough to avoid taking damage from spells taking S or more seconds to
cast and spells with powers D or less. Also, there is nothing other than spells
that can do damage to the monster. Can Takahashi do damage to the monster?
--- ---
*/

#include <iostream>
using namespace std;

int main() {
  int N, S, D;

  cin >> N;
  cin >> S;
  cin >> D;

  for (int i = 0; i < N; i++) {
    int X, Y;
    cin >> X >> Y;
    if (X > S && Y > D) {
      printf("Yes");
      return 0;
    }
  }
  printf("No");

  return 0;
}
