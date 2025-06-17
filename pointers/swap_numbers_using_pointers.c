#include<stdio.h>

void swap(int *a, int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

void main(){
	int i = 1, j =2;

	printf ("Value before swapping = %d, %d\n", i, j);
	swap(&i, &j);

	printf ("Values after swapping = %d, %d\n", i, j);
}
