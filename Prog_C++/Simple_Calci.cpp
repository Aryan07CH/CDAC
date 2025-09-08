#include<iostream>
using namespace std;

int main(){
	float i,j;
	char ch;
	cout<<"Enter a first numbers: ";
	cin>>i;
	cout<<"Enter a Operator(+,-,*,/): ";
	cin>>ch;
	cout<<"Enter a second numbers: ";
	cin>>j;
	//IF-ELSE
//	if(ch=='+')
//		cout<<"Addition is: "<<i+j;
//	else if(ch=='-')
//		cout<<"Substraction is: "<<i-j;
//	else if(ch=='*')
//		cout<<"Multiplication is: "<<i*j;
//	else if(ch=='/')
//		if(j!=0)
//			cout<<"Division is: "<<i/j;
//		else
//			cout<<"Error Division by Zero";
//	else
//		cout<<"Invalid Operator";
		
//SWITCH-CASE

	switch(ch){
		case '+':
			cout<<"Addition is: "<<i+j;
			break;
		case '-':
			cout<<"Substraction is: "<<i-j;
			break;
		case '*':
			cout<<"Multiplication is: "<<i*j;
			break;
		case '/':
			if(j!=0)
				cout<<"Division is: "<<i/j;
			else
				cout<<"Error Division by Zero";
				break;
		default:
			cout<<"Invalid Operator";
	}
}
