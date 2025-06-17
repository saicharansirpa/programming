#include <stdio.h>

int find_second_largest(int a[], int l)
{

	int largest = -1;int nextlarge = -1;

	for ( int i =0; i< l; i++){

		if(a[i] > largest)
		{
			nextlarge = largest;
			largest = a[i];
		}

		else if ( a[i] < largest && a[i]>nextlarge )
		{
			nextlarge = a[i];
		}	
	}

	return nextlarge;
}




int main(){

	int arr[5] = {23,32,42,12,31}, num;
	
	int len = sizeof(arr)/sizeof(arr[0]);

	num=find_second_largest(arr, len);

	printf ("Second largest number = %d\n", num);

	return 0;
}
