#include<iostream>
#include<stdio.h>

using namespace std;

template <class T>
class Arithametic
{
	private:
		T a;
		T b;
	public:
		Arithametic(T a, T b);
		T add();
};
template <class T>
Arithametic<T> :: Arithametic( T a, T b){
	this -> a = a;
	this -> b = b;
}
template <class T>
T Arithametic<T> :: add(){
	T c;
	c=a+b;
	return c;
}
int main(){
	Arithametic<int> ar(10,5);
	cout<<ar.add()<<endl;
        
	return 0;
}

