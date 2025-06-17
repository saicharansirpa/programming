#include<stdio.h>

void main(){

	int a[10] = {1,2,3,1,2,3,7,8,9,7};

	int count=0;
	for (int i =0; i< sizeof(a)/sizeof(int); i++)
	{
		for (int j = 0; j< sizeof(a)/sizeof(int) ; j++)
		{ if ( a[i] == a[j]){ count++;}
		}
		printf (" Count of %d is %d \n", a[i], count);
		count = 0;
	}


}
