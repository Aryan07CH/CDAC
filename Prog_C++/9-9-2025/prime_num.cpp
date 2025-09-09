#include<iostream>
using namespace std;


int main(){
	int number,i,j,count;
	bool flag=true;//set
//	cout<<"\nEnter a number:";
//	cin>>number;
	for(j=1;j<1000;j++){    //suplier loop
		flag=true;
		for(i=2;i<j;i++){
			if(j%i==0){          //signal
				flag=false;//reset
				break;
			}
//		cout<<"\ndiv with "<<i<<" flag is:"<<flag;
		}
	if(flag)//flag==true
		cout<<endl<<j<<" yes it is prime";
		
//	else
//		cout<<endl<<j<<" no it is not prime";
	}
	
}
