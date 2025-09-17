#include<stdio.h>


int second_largest(int arr[], int l)
{
	int max =arr[0], sndmax=arr[0];
	for ( int i =1; i < l; i++)
	{
		if(arr[i] > max)
			max = arr[i];
	}

	for ( int i =1; i < l; i++)
        {
                if(arr[i] > sndmax)
                        if(max == arr[i])
				continue;
			else
				sndmax=arr[i];
        }

	return sndmax;

}


int main()
{
  int a[5] = { 20,23,43,54,24};

  int len = sizeof(a)/sizeof(int);

  int num = 0;

  num = second_largest(a, len);

  printf (" Second largest number = %d \n", num);
}
