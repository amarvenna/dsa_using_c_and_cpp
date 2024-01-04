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
        printf("\n");
}

void Insert(struct Array *arr,int index,int x)
{
        if(index >= 0 && index < arr->length)
        {
                for(int i = arr->length;i>index;i--)
                {
                        arr->A[i] = arr->A[i-1];
                }
                arr->A[index] = x;
                arr->length++;
        }
}

int main()
{
        struct Array arr = {{2,3,4,5,6},10,5};
        Insert(&arr,2,7);
        Display(arr);
        return 0;
}

