	//7. Write a C++ program to check whether a number is palindrome or not using recursion.

	#include <iostream>
	using namespace std;

	/*
	palindrome --no.=its reverse
	1.get a no.
	2. find its reverse ----use n= int (n/10)/..till n=0..call function inside function store the remainder r= n%10...as r1 r2 r3 r4..etc
	*/

	int reverseSum(int n,int sum=0)
	{	int p=n%10;
	
		sum+=p;
	
		if(n==0)
		return sum;
		else 
		sum*=10;
		return reverseSum(n/10,sum);
	}



	int main()
	{	int n,c;
		cout<<"enter the no.  & I shall tell u whether it is PALINDROME OR NOT :"<<endl;
		cin>>n;

		int p;
		c=reverseSum(n);
		//cout<<c/10;
		if(n==c/10)
		cout<<"given no. is PALINDROME";
		else
		cout<<"given no. is not PALINDROME";
	return 0;
	}
