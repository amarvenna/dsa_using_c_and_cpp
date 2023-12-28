#include<iostream>

using namespace std;

int main() {
	int b[3]; //array initilization
	b[0]=98;
	b[1]=99;
	b[2]=100;

	int a[10]={12,14,15,17,21}; //array initialization and declaration
				   
	int c[]={71,72,73,74,75,76,77,78}; //declaring array without mentioning size 
        
        cout<<b[2]<<endl;
	//for loop to print array elements
        for(int i=0;i<8;++i){
	   cout<<c[i]<<" ";
	}	   
        cout<<endl;

	cout<<a[0]<<endl;
	cout<<a[9]<<endl; //a[9] is not declared, it will get 0
	
	// for each loop to print array elements.
	for (int x:b){
		cout<<x<<" ";
	}
	cout<<endl;
	return 0;
}
