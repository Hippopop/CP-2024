#include <stdio.h>

typedef struct {
  int age;
  char name[50];
  char email[50];
  char password[50];
} User;

void printUser(User *user) {
  printf("Name: %s.\nEmail: %s.\n", user->name, user->email);
  printf("Age: %d\n", (*user).age);
}

int main() {
  int age;
  scanf("%d", &age);
  User one = {age, "Mostafij", "mostafijul929@gmail.com", "12345678"};
  printUser(&one);
  return 0;
}