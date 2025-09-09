#include<iostream>
#include<cmath>
//reverse a number digitwise
using namespace std;
int main()
{
	int num;
	cout<<"Armstrong numbers between 1 and 1000:";
	for(num=100;num<=999;num++){
	
//	cout<<"\nEnter a number:";
//	cin>>num;
	int num1=num;
	int digit=0,sum=0;		//reset

		while(num1>0){		//checker
		int digit=num1%10; 	//returns last digit
		num1=num1/10;		//removes last digit
		sum=sum+pow(digit,3);
//		cout<<"\n Number:"<<num1<<"\t Digit:"<<digit;//<<"\tRno: "<<rno;  //5 blank space->\t
//		cout<<"\tSum of Number is: "<<sum;
	}
//	cout<<"\n Sum of Number is: "<<sum;
	if(sum==num)
		cout<<endl<<num<<" Is Armstrong Number ";
//	else
//		cout<<endl<<num1<<" It is not";
}
	
	//    Armstrong numbers between 1 and 1000 
	
}
