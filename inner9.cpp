		//9. Write a C++ program to find factorial of any number using recursion.
	#include <iostream>
	using namespace std;

	/*
	1.get a no.
	2.product pro=pro*i; i++ and i<=n
	3.then print in main(0
	*/

	int factorial(int n,int i,int pro)
	{	if (i>n) return pro;
		else {
			pro*=i;
			i++;
			factorial(n,i,pro);
		      }
	}

	int main ()
	{
		int n;
		cout<<"enter a no,. I SHALL GIVE U ITS FACTORIAL  ";
		cin>>n;
		int pro=1;
		int i=1;
		cout<<"required facrorial is   "<<factorial(n,i,pro);
	return 0;
	}	

