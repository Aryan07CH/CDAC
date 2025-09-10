#include<iostream>
#include<cmath>
using namespace std;

int main(){
	float p,r,t;
	
	cout<<"\nEnter Your Amount: ";
	cin>>p;
	cout<<"\nEnter Your Rate: ";
	cin>>r;
	cout<<"\nEnter Your Time: ";
	cin>>t;		
	
	cout<<"Simple Interest is: "<<((p*r*t)/100);
}
