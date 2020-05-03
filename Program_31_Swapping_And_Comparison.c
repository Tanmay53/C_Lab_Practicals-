#include<stdio.h>

void swap(int* x, int* y) {
  int temp = *x;
  *x = *y;
  *y = temp;
}

int main() {
  int a, b, c, temp;

  printf("Enter 3 Integers seperated by spaces.\n");
  scanf("%d %d %d", &a, &b, &c);

  if(a > b) {
    swap(&a, &b);
  }

  if(b > c) {
    swap(&b, &c);
  }

  if(a > b) {
    swap(&a, &b);
  }

  printf("%d, %d, %d.\n", a, b, c);
}
