#include<stdio.h>

void swap(int* x, int* y) {
  int temp = *x;
  *x = *y;
  *y = temp;
}

int main() {
  int length;

  printf("Enter the Number of Elements : ");
  scanf("%d", &length);

  int list[length];

  printf("Enter the Integer Elements.\n");

  for(int index = 0; index < length; index++) {
    scanf("%d", &list[index]);
  }

  for(int i = 0; i < (length - 1); i++) {
    for(int j = 0; j < (length - i - 1); j++) {
      if(list[j] > list[j + 1]) {
        swap(&list[j], &list[j + 1]);
      }
    }
  }
  
  printf("The Sorted Elements.\n");
  for(int index = 0; index < length; index++) {
    printf("%d, ", list[index]);
  }
  printf("\b\b.\n");
}