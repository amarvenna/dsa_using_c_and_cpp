#include<stdio.h>

struct Array
{
        int A[10];
        int size;
        int length;
};      

void Display(struct Array arr)
{       
        printf("Elements are: \n");
        for(int i=0;i<arr.length;i++)
        {       
                printf("%d ",arr.A[i]);
        }       
}       

void Append(struct Array *arr, int x)
{
	if(arr->length < arr->size)
	{
		arr->A[arr->length] = x;
		arr->length++;
	}
}

int main()
{       
        struct Array arr = {{2,3,4,5,6},10,5};
	Append(&arr,7);
        Display(arr);
	printf("\n");
        return 0;
}
