#include<iostream>
//beaking digits
using namespace std;
int main()
{
	int number,sum=0;
	cout<<"\nEnter a number:";
	cin>>number;
	while(number>0)
	{
		int digit=number%10;
		number=number/10;
		sum=sum+digit;
		cout<<"\n Number:"<<number<<"\t Digit:"<<digit<<"\t Sum: "<<sum;  //5 blank space->\t

	}
	cout<<"\n Sum of Number is: "<<sum;
}
