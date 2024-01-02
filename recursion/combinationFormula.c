#include<stdio.h>

int fact(int n)
{
	if(n==0)
		return 1;
	return fact(n-1)*n;
}
int ncr(int n,int r)
{
	int num,den;
	num=fact(n);
	den=fact(r)*fact(n-r);
	return num/den;
}
int main()
{
	printf("%d\n",ncr(3,2));
	return 0;
}
