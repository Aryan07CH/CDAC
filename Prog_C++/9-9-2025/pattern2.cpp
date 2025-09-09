#include<iostream>
//PATTERNS
using namespace std;
int main(){
	char i,j;
	for(i='a';i<='e';i++){//controller
		for(j='a';j<=i;j++){//printer
			cout<<j;//cout<<j;//cout<<j%2;//cout<<i;//cout<<"X";
		}
		cout<<"\n";//next line
	}
}
