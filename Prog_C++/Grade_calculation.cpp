#include <iostream>
#include<cmath>
using namespace std;

int main(){
	int num;
	cout<<"Enter a Number: \n";
	cin>>num;
	if(num>0)
		cout<<"Number is positive: "<<num;
	else if(num<0)
			cout<<"Number is Negative: "<<num;
//	else if(num3>num1 && num3>num2)
//		cout<<"Largest Among Three Number is:"<<num3;
	else//default execution where every thing fails
		cout<<"Number is:"<<num; 
}

