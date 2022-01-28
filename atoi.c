#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[]) {
  char ch[]="999";
  int x;
  x = atoi(ch);
  printf("%d\n",x);
  printf("%d",x+1);
  return 0;
}
