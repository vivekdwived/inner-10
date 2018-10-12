	
	//1. Write a C++ program to find power of any number using recursion.
	#include <iostream>
	using namespace std;

	/*
	1.get no. and the power n
	2.recursion is pow*=x,pow initially=1
	3.iterate the loop n ttimes -new parameter i++
	*/

	//recursive function

	int power(int x,int i,int pow,int n)
	{ 
		if(i==n)
			return pow;
	
		else {
			pow=pow*x;
			i++;
			//cout<< pow<<endl;
			return power(x,i,pow,n);
			}	
	}


	//Driver function 
	int main ()
	{ 	int x,n,ans;
		cout<<"enter the no. and its power:";
		cin>>x>>n;
		int i=0;
		int pow=1;
		power(x,i,pow,n);
		cout<<" \n required value as x^n is=  "<<power(x,i,pow,n);
	return 0;
	}

