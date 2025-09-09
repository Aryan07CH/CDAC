#include<iostream>
//reverse a number digitwise
using namespace std;
int main()
{
//	int num,digit=0,rno=0;
//	cout<<"\nEnter a number:";
//	cin>>num;
cout << "Palindrome numbers between 100 and 199 are:\n";
	for(int num=100;num<200;num++){
		
		int num1=num;
		int rno=0; 		//reset
//		int temp=num;
		while(num1>0)	//checker
		{
			
			int digit=num1%10;
			num1=num1/10;
			rno=rno*10+digit;
//			cout<<"\n Number:"<<num<<"\t Digit:"<<digit<<"\tRno: "<<rno;  //5 blank space->\t
	
		}
//		cout<<"\n Reverse of Number is: "<<rno;
		if(num==rno)
			cout<<endl<<num<<" Number is Paridrone";
//		else
//			cout<<endl<<num1<<" It is not";
	}
}

