#include <stdio.h>

void main () {
  int size = 10;
  int array[size];
  for (int i = 0; i < size; i++){
    scanf("%d", &array[i]);
  }//getting input
  printf("--------------------------------------------\n");
  for (int i = 0; i < size; i++){
    printf("| %d ", array[i]);
  }
  printf("|\n--------------------------------------------\n");
  return;
}