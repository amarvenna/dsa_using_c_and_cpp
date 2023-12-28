#include<iostream>
#include<stdio.h>

using namespace std;

int main() {
	int a=10;
	int *p;
	p=&a;
	cout<<a<<endl;
	printf("%d %d\n",p,&a);
        cout<<*p<<endl;

	return 0;
}
