#include <iostream>
using namespace std;

int main(){
	float per;
	cout<<"\nEnter Your Percentage: ";
	cin>>per;
	if(per<50&&per>=40)
		cout<<"Third Class";
	else if(per>=60)
		cout<<"First Class";
	else if(per<60 && per>=50)
		cout<<"Second Class";
//	else if(per<50&&per>=40)
//		cout<<"Third Class";
	else
		cout<<"Better Luck Next time";
}

