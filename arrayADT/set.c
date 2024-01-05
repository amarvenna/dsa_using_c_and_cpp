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

void Set(struct Array *arr,int index,int x)
{
	if(index >= 0 && index < arr->length)
		arr->A[index] = x;
}

int main()
{
	struct Array arr = {{2,3,4,5,6},10,5};
	Set(&arr,1,10);
	Display(arr);
	return 0;
}
