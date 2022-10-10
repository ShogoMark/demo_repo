#include <stdio.h>
#include <stdlib.h>


int main()
{
	int n, i, *ptr;
	
	printf("\nenter total number of values:");
	scanf("%d", &n);

	ptr=(int*)calloc(n, sizeof(int));

	printf("\nenter the values:");
	for (i=0;i<n;i++)
	{
		scanf("%d", (ptr + i));
	}

	printf("\nThe values are:");
	for (i=0;i<n;i++);
	{
		printf("%d", *(ptr + i));
	}
	free(ptr);
}

