#include <stdio.h>
#include "kernel_add.h"

void kernel(int a[NUM], int b[NUM], int c[NUM]) {
	int i;
	for (i=0;i<NUM;i++) {
		c[i] = a[i] + b[i];

	}
	return;
}
