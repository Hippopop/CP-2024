#include <stdio.h>

// This function clears the console!
void clear() { printf("\e[1;1H\e[2J"); }

int main() {
  clear();
  int length;
  int initial_length;
  printf("Enter the length of the array: ");
  scanf("%d", &initial_length);
  length = initial_length;
  // Initiate and populate the array!
  int array[length];
  clear();
  printf("Let's populate your array!\n\n");
  for (int i = 0; i < length; i++) {
    printf("Enter the element at index %d: ", i);
    scanf("%d", &array[i]);
  }
  clear();
  printf("\nYour array is ready to proceed!\n\n\n");

  int input = 1;
  int clear_screen = 0;
  char control_msg[] = "\n\n0:exit  1:status  2:insert  3:remove \ninput: ";

  while (input) {
    if (clear_screen) {
      clear();
    }

    if (input == 1) {
      printf("Array status : \n");
      printf("length: %d\n", length);
      printf("items: *");
      for (int j = 0; j < length; j++) {
        printf("| %d |", array[j]);
      }
      printf("*\n");
    } else if (input == 2) {
      clear();
      printf("Array Length: %d\n", length);
      printf("Enter the position to insert: ");
      int pos;
      scanf("%d", &pos);
      if (pos > initial_length || pos < 0) {
        clear();
        printf("Position out of bounds!\n\n");
        input = 1;
        continue;
      } else {
        printf("Enter the element to insert: ");
        int element;
        scanf("%d", &element);
        for (int k = length; k >= pos; k--) {
          array[k] = array[k - 1];
        }
        array[pos - 1] = element;
        if (length < initial_length) {
          length++;
        } else {
          printf("You've entered an unsupported input!\nPlease pick one of the supported inputs!\n\n");
          input = 1;
          continue;
        }

        clear();
        printf("Inserted value(%d) at position(%d)\n", element, pos);
        input = 1;
        continue;
      }
    }

    // Prompt user!
    printf("%s", control_msg);
    scanf("%d", &input);
    clear();
  }

  return 0;
}
