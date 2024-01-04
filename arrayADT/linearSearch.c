#include<stdio.h>

struct Array
{
	int A[10];
	int size;
	int length;
};

void Display(struct Array arr)
{
	printf("Elements are: ");
	for(int i=0;i<arr.length;i++)
	{
		printf("%d ",arr.A[i]);
	}
	printf("\n");
}

int LinearSearch(struct Array arr, int key)
{
	for(int i=0;i<arr.length;i++)
	{
		if(key == arr.A[i])
			return i;
	}
	return -1;
}

int main()
{
	struct Array arr = {{2,3,4,5,6},10,5};
	printf("The index is: %d \n",LinearSearch(arr, 6));
//	Display(arr);
	return 0;
}
