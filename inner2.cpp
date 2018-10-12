		// Write a C++ program to print all natural numbers between 1 to n using recursion.

	#include<iostream>
	using namespace std;

	/*recursive function
	1.get nos. from main.
	2.call..it 
	3.print the no. i and do i++
	4.return th e function again till i==n..
	5. come back to main print sum;
	*/

	int natureprint(int n,int i)
	{ 
		if(i==n) { return 0;}
	
		else { i++;
			cout<<i<<endl;
		     }
		natureprint(n,i);
	return 0;
	}


	//DRIVER FUNCTION
	int main()
	{	int n;
		cout<<"enter the no. till which u need all numbers:";
		cin>>n;
		
		int i=0;	
		natureprint(n,i);
	return 0;
	}
