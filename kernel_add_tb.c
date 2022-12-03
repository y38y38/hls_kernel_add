#include <stdio.h>
#include "kernel_add.h"
int main(int argc, char** argv)
{
  int a[NUM];
  int b[NUM];
  int c[NUM];
  int i;

  for (i=0;i<NUM;i++) {
	  a[i] = i;
	  b[i] = NUM -i;
  }

  kernel(a, b, c);

  for(i=0;i<NUM;i++) {
	  if(c[i] != a[i] + b[i]) {
		  printf("error %d %d %d %d",i, a[i],b[i],c[i]);
		  return -1;
	  }
  }
  printf(" test ok");
}
