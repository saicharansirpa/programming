#include<stdio.h>

int add_num(int a,int b)
{
	return a+b;
}


void main(){

	int i=1, j=2;

	int sum =0;
	sum = add_num(i,j);

	printf("sum = %d\n",sum);

}
