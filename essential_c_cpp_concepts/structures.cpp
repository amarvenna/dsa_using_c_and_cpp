#include<iostream>
#include<stdio.h>

using namespace std;

struct Rectangle {
	int length;
	int breadth;
};

int main() {
	Rectangle r;
	r.length=10;
	r.breadth=5;
	cout<<"Area of Rectangle is:"<<" "<<r.length*r.breadth<<endl;
	return 0;
}
