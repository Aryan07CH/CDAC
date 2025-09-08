#include <iostream>
#include<cmath>
using namespace std;

int main(){
	float x1,x2,y1,y2;
	cout<<"\nEnter 1st 2 points x1,y1\n";
	cin>>x1>>y1;
	cout<<"\nEnter 2st 2 points x2,y2\n";
	cin>>x2>>y2;
	
	cout<<"\nDistance between two points:"<<sqrt(pow((x2-x1),2)+pow((y2-y1),2));

}

