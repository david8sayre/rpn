#include<stdio.h>
#define NEWLINE '\n'

int sub(int x, int y);
int add(int x, int y);
int mul(int x, int y);
int div(int x, int y);
int mod(int x, int y);

int question1();
int question2();
int question3();
int question4();
int question5();

int main() {
  int result = 0;
  putchar(NEWLINE);
  
  result = add(result, question1());
  result = add(result, question2());
  result = add(result, question3());
  result = add(result, question4());
  result = add(result, question5());

  printf("\n\tresult = %d\n", result);
  
  putchar(NEWLINE);
  return 0;
}

int question1() {
  int result = 0;
  printf("\n\tfirst: (");
  result = sub(7,5);
  printf("=%d)\n", result);
  return result;
}

int question2() {
  int result = 0;
  printf("\n\tsecond: (");
  result = add(9,16);
  printf("=%d)\n", result);
  return result;
}

int question3() {
  int result = 0;
  printf("\n\tthird: (");
  result = add(9, mul(8,5));
  printf("=%d)\n", result);
  return result;
}

int question4() {
  int result = 0;
  printf("\n\tfourth: (");
  result = div(2, mod(15, 7));
  printf("=%d)\n", result);
  return result;
}

int question5() {
  int result = 0;
  printf("\n\tfifth: (");
  result = sub(mul(div(15, sub(7, add(1, 1))),3), add(2, add(1,1)));
  printf("=%d)\n", result);
  return result;
}

int sub(int x, int y) {
  printf("(%d %d -)", x, y);
  return x - y;
}

int mul(int x, int y) {
  printf("(%d %d *)", x, y);
  return x * y;
}

int add(int x, int y) {
  printf("(%d %d +)", x, y);
  return x + y;
}

int div(int x, int y) {
  printf("(%d %d /)", x, y);
  return x / y;
}

int mod(int x, int y) {
  printf("(%d %d %%)", x, y);
  return x % y;
}
