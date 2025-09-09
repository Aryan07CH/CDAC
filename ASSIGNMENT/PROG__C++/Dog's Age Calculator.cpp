//1. Dog's Age Calculator

#include<iostream>
using namespace std;

int main(){
	int humanAge,dogAge;
	cout<<"Enter your Dog's Age: ";
	cin>>dogAge;
	if(dogAge<=2){
		humanAge=dogAge*10.5;
		cout<<"\n Your dog's age in human years is: "<<humanAge;
	}
	else{
		humanAge=(2*10.5)+((dogAge-2)*4);
		cout<<"\n Your dog's age in human years is: "<<humanAge;
	}
}
