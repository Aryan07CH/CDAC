#include<iostream>
//print center triangle of n lines where n given by user
using namespace std;
int main(){
	char a,b;
	int i,j,space,s,n;
//	cout<<"Emter no of lines: ";
//	cin>>n;
	for(space=5,i=1,a='a';space>=1 && i<=5&&a<='e';space--,i++,a++){//controller
	
		//put spaces on a line
		for(s=1;s<=space;s++)
			cout<<" ";//space
		//X print
		for(j=1;j<=i;j++)//printer
			cout<<j;
		for(b='a';b<=a;b++)
			cout<<b;
//		//next line
		cout<<"\n";
	}
	for(space=2,i=4,a='d';space<=5 && i>=1&&a>='a';space++,i--,a--){//controller
	
		//put spaces on a line
		for(s=1;s<=space;s++)
			cout<<" ";//space
		//X print
		for(b='a';b<=a;b++)
			cout<<b;
		for(j=1;j<=i;j++)//printer
			cout<<j;
		
//		//next line
		cout<<"\n";
	}
}
