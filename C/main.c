#include <stdio.h>

int main(int argc, char** argv)
{
  char buf[255];

  printf("Please enter your name: ");
  scanf("%s", buf);
  printf("Hello %s!\n", buf);

  return 0;
}
