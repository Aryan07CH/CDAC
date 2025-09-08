#include <iostream>
using namespace std;

int main(){
	int age;
	cout<<"\nEnter Your Age: ";
	cin>>age;
	if(age>=18 && age<=120)
		cout<<"You are Eligible";
	else
		cout<<"You are not Eligible";
}

