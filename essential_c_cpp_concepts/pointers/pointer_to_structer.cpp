#include<stdio.h>
#include<iostream>

using namespace std;

struct Rectangle{
	int length;
	int breadth;
};

int main(){
	Rectangle *p;
	p=new Rectangle;
	p->length=15;
	p->breadth=10;
	cout<<p->length<<endl;
	cout<<p->breadth<<endl;
	return 0;
}

