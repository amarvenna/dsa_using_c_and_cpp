#include<iostream>

using namespace std;

int F[10]; //global array with size 10
int fib(int n)
{
	if(n<=1)
	{
		F[n]=n; // updating in array
		return n;
	}
	else
	{
		if(F[n-2] == -1)
			F[n-2] = fib(n-2);
		if(F[n-1] == -1)
			F[n-1] = fib(n-1);
                F[n] = F[n-2]+F[n-1];
		return F[n-2]+F[n-1];
	}
}
int main()
{
	int i;
	for(i=0;i<10;i++)
		F[i]=-1;
	cout<<fib(10)<<endl;
	return 0;
}
