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

int Get(struct Array arr, int index)
{
	if(index >= 0 && index < arr.length)
	{
		return arr.A[index];
	}
	return -1;
}

int main()
{
	struct Array arr = {{2,3,4,5,6},10,5};
        printf("The element is %d\n",Get(arr,0));
	return 0;
}
