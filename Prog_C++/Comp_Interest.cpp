#include <iostream>
#include<cmath>
using namespace std;

int main(){
	double p,r,t;
	cout<<"\nEnter Your Amount: ";
	cin>>p;
	cout<<"\nEnter Your Rate: ";
	cin>>r;
	cout<<"\nEnter Your Time: ";
	cin>>t;
	
	cout<<"Compound Interest is: "<<p*pow(1+(r/100),t);
}

