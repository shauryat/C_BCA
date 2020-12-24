#include <stdio.h>

int main() {
  int a = 1;
  char b = 'G';
  double c = 3.14;
  printf("Hello World \n");

  printf("Hello I am a character. My value is %c and size is %lu byte. \n ", b , sizeof(char));
  printf("Hello I am integer. My value is %d and size is %lu bytes. \n", a , sizeof(int));
  printf("Hello I am integer. My value is %lf and size is %lu bytes. \n", c , sizeof(double));

  printf("bye bye world \n");

  return 0;
  
}