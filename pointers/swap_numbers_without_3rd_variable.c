#include<stdio.h>

void main(){
	int i = 1, j=2;
	printf ("Values before swapping =  %d, %d\n", i,j);

	i = i+j;
	j = i-j;
	i = i-j;

	printf ("Values after swapping = %d, %d\n", i, j);

}
