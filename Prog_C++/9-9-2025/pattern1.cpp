#include<iostream>
//PATTERNS
using namespace std;
int main(){
	int i,j;
	for(i=1;i<=5;i++){//controller
		for(j=1;j<=i;j++){//printer
			cout<<i%2;//cout<<j;//cout<<j%2;//cout<<i;//cout<<"X";
		}
		cout<<"\n";//next line
	}
}
