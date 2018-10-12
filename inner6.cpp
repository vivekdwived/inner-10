		//6. Write a C++ program to find reverse of any number using recursion.
	#include <iostream>
	using namespace std;
	/* 
	1.get the no in main();
	2. divide it by 10 and print its remainder 
	3.take integer of new no. divide by 10...so on..
	4 CALL A SUCH KIND OF FUN CTION INSIDE IT TILL INTEGER PART==0
	5. PRINT OUTPUT IN main()6. Write a C++ program to find reverse of any number using recursion.
	*/


	int reverse(int n)
	{
		if(n==0) return n;
		else {	int r=n%10;
			n =int (n/10);
			cout<<r;
			reverse(n);
		
		      }
	}


	//DRIVER FUJNCTION SAAHAB...........
	int main ()
	{
		int n;
		cout<<"enter the number ,I WOULD GIVE U ITS NO. WITH REVERSED DIGITS.:"<<endl;
		cin>>n;
		reverse(n);
	
	return 0;
	}
	
