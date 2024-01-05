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

int Max(struct Array arr)
{
	int max = arr.A[0];
	for(int i=1;i<arr.length;i++)
	{
		if(arr.A[i]>max)
			max = arr.A[i];
	}
	return max;
}

int main()
{
	struct Array arr = {{2,3,4,5,6},10,5};
	Display(arr);
	printf("The max element is %d\n",Max(arr));
	return 0;
}
