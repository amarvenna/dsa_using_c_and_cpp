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

int Min(struct Array arr)
{
	int min = arr.A[0];
	for(int i=1;i<arr.length;i++)
	{
		if(arr.A[i]<min)
			min=arr.A[i];
	}
	return min;
}

int main()
{
	struct Array arr = {{2,3,4,5,6},10,5};
	Display(arr);
	printf("The min element is %d\n",Min(arr));
	return 0;
}
