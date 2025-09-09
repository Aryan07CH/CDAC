#include<iostream>
using namespace std;

int main(){
	int start,end;
	cout<<"\nEnter a start number:";
	cin>>start;
	cout<<"\nEnter a end number:";
	cin>>end;
	
	if(start<end){
		for(int i=start;i<=end;i++){
			cout<<" "<<i;
		}
	}
	else{
		for(int i=start;i>=end;i--){
			cout<<" "<<i;
		}
	}
}
