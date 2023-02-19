#include <stdio.h>

main()
{
	int arr[7];
	for(int i=0; i<7; i++)
	{
		printf("\nEnter array item number %i: ", i+1);
		scanf("%i",&arr[i]);
	}
	printf("\nArray: ");
	for(int i=0; i<7; i++)
	{
		printf("%2i ", arr[i]);
	}
	
	int n;
	printf("\nEnter the number of items: ");
	scanf("%i",&n);
	int a[n];
	for(int i=0; i<n; i++)
	{
		printf("\nEnter item number %i: ", i+1);
		scanf("%i",&a[i]);
	}
	printf("\nArray: ");
	for(int i=0; i<n; i++)
	{
		printf("%1i ", a[i]);
	}
}
