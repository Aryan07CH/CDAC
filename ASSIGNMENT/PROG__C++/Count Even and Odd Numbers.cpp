//5. Count Even and Odd Numbers

#include<iostream>
using namespace std;

int main(){
	int num,even=0,odd=0;
	while(true){
		cout<<"Enter Numbers: ";
		cin>>num;
		if(num<0)
			break;
		else if(num%2==0)
			even++;
		else if(num%2==1)
			odd++;
	}
	cout<<"Number of Even Numbers:"<<even;
	cout<<"Number of Odd Numbers:"<<odd;
}
