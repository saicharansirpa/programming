#include<stdio.h>

void main()
{
 int arr[10] = { 2,4,1,5,12,1,3,4,6,10};

 int max, min, max_i, min_i;

 max = arr[0];
 min = arr[0];

 printf ("Size of arr[10] = %d \n", sizeof(arr));

 for (int i=1; i<sizeof(arr)/sizeof(int); i++)
 {
	 if (arr[i] > max)
	 {
		 max = arr[i];
		 max_i = i;
	 }

	 if (arr[i] < min)
	 {
		 min = arr[i];
		 min_i = i;
	 }

 }

 printf (" Max = %d, Min = %d \n Max index = %d, Min index = %d \n", max, min, max_i,min_i);
}
