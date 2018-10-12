		//5. Write a C++ program to find sum of all even or odd numbers in given range using recursion
	#include<iostream>
	using namespace std;

	/*
	1.get no, in  main ()
	2.make fun1..for evensum having i+=2...till  i<=n& sum +=i
	3,make fun2 ..for oddsum having i+=2..till i<n  sum+i
	4.calll each one in main and print the output
	*/

	// sum of even ones
	int evensum(int n,int i,int sum1)
	{
		if (i>=n) return sum1;
		else {	i+=2;
			sum1+=i;
			evensum(n,i,sum1);
		     }
	}

	//sum of odd ones..whoooooo....hooo....
	int oddsum(int n,int i,int sum2)
	{
		if(i>=n) return sum2;
		else {	
		
			sum2+=i;
			i+=2;
			oddsum(n,i,sum2);

		     }
	//return sum2;
	}


	//	DRIVER FUNCTION
	int main ()
	{
		int n;
		cout<<"enter the no till which sum of even or odd is needed.:"<<endl;
		cin>>n;
		int i=0;
		int sum1=0;
	
	
		cout<<"sum of even no. till  "<<n<<"   is  "<< evensum(n,i,sum1)<<endl;

		i=1;
		int sum2=0;
	
		 cout<<"SUM OF ODD NO. TILL  "<<n<<"  is  "<< oddsum(n,i,sum2);
	
	return 0;
	}
