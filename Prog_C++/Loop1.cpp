#include <iostream>
using namespace std;

int main(){
	cout<<"while";
	int i=1;
	while(i<=10){
		cout<<i<<",";
		i++;
	}
	cout<<"Do while";
	do{
		cout<<i<<",";
		i++;
	}while(i<=10);
	cout<<"For";
	for(i=1;i<=10;i++){
		cout<<i<<",";
		i++;
	}
	
}

