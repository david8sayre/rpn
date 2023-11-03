#include<stdio.h>

// DECRLARATIONS
//
int sub(int x, int y);
int add(int x, int y);
int mul(int x, int y);

int question1();
int question3();

int main() {
  int result = 0;
  
  result = add(result, question1());
  result = add(result, question3());
  
  printf(")=%d", result);
  return 0;
}

// DEFINITIONS
//
int question1() {
  int result = 0;

  printf("first: (");
  result = sub(7,5);
  printf("=%d)\n", result);
  return result;
}

int question3() {
  int result = 0;

  printf("third: (");
  result = add(mul(8,5),9);
  printf("=%d)\n", result);
  return result;
}

int sub(int x, int y) {
  printf("(%d %d -)", x, y);
  return x - y;
}

int add(int x, int y) {
  printf("(%d %d +)", x, y);
  return x + y;
}

int mul(int x, int y) {
  printf("(%d %d *)", x, y);
  return x * y;
}
