#include <stdio.h>
#include <stdlib.h>
#include <sys/syscall.h>
#include <unistd.h>

int main() {
  int n1 = 2;
  int n2 = 3;

  int *result = malloc(sizeof(int));
  syscall(333, n1, n2, result);
  printf("Num: %d\n", *result);

  int x1 = 1;
  int x2 = 2;
  int *result2 = malloc(sizeof(int));
  syscall(334, x1, x2, result2);
  printf("Num2: %d\n", *result);
}

