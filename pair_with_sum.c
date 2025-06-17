/*
Problem is to find the pair of elements in an array for the given target
 */
#include<stdio.h>
#include <stdbool.h>

/*Function to check pairs*/
bool check_pair(int a[],int size,int target)
{

	for ( int i = 0; i < size; i++)
        {
                for ( int j = i+1; j < size; j++)
                {
                        if ( a[i] + a[j] == target){
				return true;
                        }
                }
        }

	return false;

}


int main()
{
	int arr[5] = { 3,-2,1,4,6};
	int target = 10;
	int size = sizeof(arr)/sizeof(int);


	if(check_pair(arr,size, target))
		printf ("True\n");
	else
		printf ("False\n");
/*
	for ( int i = 0; i < 5; i++)
	{
		for ( int j = i+1; j < 5; j++)
		{
			if ( arr[i] + arr[j] == target){
				a = i;
				b = j;
			}
		}
	}
*/

	//printf ( "Pair of elements in an array for the given target is %d, %d \n", arr[a], arr[b]);
}
