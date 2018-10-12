		//8. Write a C++ program to find sum of digits of a given number using recursion.

	#include<iostream>
	using namespace std;

	/*
	JUST LIKE REVESING THE DIGITS DO SUM ISTEAD OF PRINTING
	1.get the no in main() 
	2.divide it by 10 take remainder =r add to sum =sum+remainder (initially sum=0)
	3.print it in main()
	*/


	int sumdigits(int n)
	{

	

		if(n!=0)
		return (n%10+sumdigits(n/10));
		else
		return 0;
	/*
		if(n==0) 
		return sum;
		else {	int r=n%10;
			sum+=r;
			sumdigits(n/10,sum);
			cout<<sum<<endl;
			//sumdigits(n/10,sum);
		     }
	//return sum;*/
	}




	//DRIVER FUNCTION 
	int main ()
	{
		int n;
		cout<<"enter the no. I shall give u sum of its digits:"<<endl;
		cin>>n;
		int sum=0;
		cout<<" required sum of digits is  "<<sumdigits(n)<<endl;

	return 0;
	}
	
