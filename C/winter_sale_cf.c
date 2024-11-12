/*
--- ---
time: 11:26:24+06:00
date: Tue 05, Nov 2024
author: Mostafijul Islam
problem: https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/A

*INPUT*
- Only one line containing two numbers 𝑋 and 𝑃(1≤𝑋≤99,1≤𝑃≤4×104) – the discount percentage, and the price of the T-shirt after the discount.

*QUESTION*
- The winter sale began, and Mrs. Sarah wants to buy a T-shirt for her son. The T-shirt has a ticket that indicates a discount of 𝑋% and
its price 𝑃 after the discount. She now wants to know the price before the discount to know if the discount was worthy. Help her!
--- ---
*/

#include <stdio.h>

int main()
{
    int p, x;
    scanf("%d%d", &x, &p);
    printf("%.2f\n", ((float)p / (100 - x)) * 100);
    return 0;
}