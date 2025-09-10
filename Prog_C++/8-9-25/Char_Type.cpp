#include<iostream>
using namespace std;

int main(){
	char ch;
	cout<<"Enter a Character: ";
	cin>>ch;
	
	if ((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z'))
		cout<<ch<<" is a Character";
	else if(ch>=0 && ch<=9)
		cout<<ch<<" is a Numeric";
	else
		cout<<ch<<" is a Special Character";
}
