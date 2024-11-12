#include<stdio.h>
#include<stdlib.h>

int main() {
printf("\e[1;1H\e[2J");
  int a;
  scanf("%d", &a);
  printf("%d\n", a);
  return 0;
}
