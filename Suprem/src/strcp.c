#include <stdio.h>
#include <string.h>

int main()
{
  char a[16]="(110 100 111)";
  printf("%s\n",a);
  strcpy(a,a+1);
  printf("%s\n",a);
}
