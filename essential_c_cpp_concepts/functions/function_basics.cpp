#include<stdio.h>
#include<iostream>

using namespace std;

int add(int a,int b){
	int c = a+b;
	return c;
}
int main(){
	int x=10,y=20,sum;
	sum=add(x,y);
	cout<<sum<<endl;
	return 0;
}
