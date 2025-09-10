#include<iostream>
using namespace std;

int main(){
	char ch;
	cout<<"Enter a Character: ";
	cin>>ch;
	
	if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
		cout<<ch<<" is a Vowel";
	else
		cout<<ch<<" is a Consonant";
}
