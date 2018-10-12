		//10. Write a C++ program to generate nth Fibonacci term using recursion.
	#include<iostream>
	using namespace std;

	/*
	1.Fn=Fn-1+Fn-2..........is called Fibonacci sequence
	2.F0=0,F1=1,series=0,1,1,2,3,5,8........
	3.get n=nth term to be found
	4.if n=0,F=0,if n=1 F=1,then Fn=Fn-1+Fn-2.......
	5.write a function Fi= previous1 + previous 2;..call function inside the function..
	6.as i>n terminate the function print its value in MAIN()..
	*/

	int fib(int n)
	{	if(n==0||n==1)
		return 1;
	
		else 
			return (fib(n-1)+fib(n-2));
	}






	//DRIVER FUNCTION
	int main()
	{
		int n;
		cout<<"enter the term in FIBONACCI SEQUENCE which you want :";
		cin>>n;

		cout<<fib(n);

	return 0;
	}
	
