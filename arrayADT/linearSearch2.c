//doubt 
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

void swap(int *x, int *y)
{
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
}

int LinearSearch(struct Array *arr, int key) //this is using move to front/head method.
{
        for(int i=0;i<arr->length;i++)
        {
                if(key == arr->A[i])
			swap(&arr->A[i],&arr->A[0]);
                return i;
        }
        return -1;
}

int main()
{
        struct Array arr = {{2,3,4,5,6},10,5};
        printf("The index is: %d \n",LinearSearch(&arr, 5));
        Display(arr);
        return 0;
}

