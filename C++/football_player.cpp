/*
--- ---
time: 01:17:27+06:00
date: Mon 11, Nov 2024
author: Mostafijul Islam
problem: https://codeforces.com/problemset/problem/96/A

*INPUT*
- The first input line contains a non-empty string consisting of characters "0" and "1", which represents players.
The length of the string does not exceed 100 characters. There's at least one player from each team present on the field.

*QUESTION*
- Petya loves football very much. One day, as he was watching a football match, he was writing the players'
 current positions on a piece of paper. To simplify the situation he depicted it as a string consisting of zeroes and ones.
 A zero corresponds to players of one team; a one corresponds to players of another team. If there are at least 7 players of
 some team standing one after another, then the situation is considered dangerous. For example, the situation 00100110111111101 is dangerous
and 11110111011101 is not. You are given the current situation. Determine whether it is dangerous or not.
--- ---
*/

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string v;
    cin >> v;

    int count;
    char current;
    for (int i = 0; i < v.length(); i++)
    {
        char c = v[i];

        if (current == c)
        {
            count++;
        }
        else
        {
            current = c;
            count = 1;
        }

        if (count == 7)
        {
            std::cout << "YES";
            return 0;
        }
    }

    std::cout << "NO";
}
