		/*3. Write a C++ program to print all even or odd numbers in given range using recursion.*/

	#include<iostream>
	using namespace std;

	/* 
	1.get the no. in int main 
	2.declare function even to print even numbers
	3.declare function odd to print odd numbers 
	4.Each funtcion calls itself till i++ ==n.........recursion
	5.come back to main and print even ...& odd....
	*/

	 //even print
	int evenprint(int n,int i)
	{	if(i>=n-1) return 0;
		else {	i+=2;
			cout<<i<<endl;
			evenprint(n,i);
		     }
	
		return 0;
	}

	//odd printing function
	int oddprint(int n,int i)
	{	
		if(i>=n+1) return 0;
		else {
			cout<<i<<endl;
			i+=2;
			oddprint(n,i);
		      }
	return 0;
	}

	//DRIVER SAHAAAB KA FUNCTION .....I LIKE IT...HA HA HA ..

	int main ()
	{ int n;
		cout<<"enter the no . till which the even  & odd are to be printed..."<<endl;
		cin>>n;
		int i=0;
		cout<<"even numbers till  "<<n<<"  are"<<endl;
		evenprint(n,i);
	
		i=1;
		cout<<"odd numbers till  "<<n<<"  are"<<endl;
		oddprint(n,i);
	return 0;
	}
