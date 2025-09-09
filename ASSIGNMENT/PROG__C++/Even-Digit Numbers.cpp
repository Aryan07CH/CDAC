//Even-Digit Numbers

#include<iostream>
using namespace std;

int main(){
	int num;
	for(int i=100;i<=400;i++){
		while(i>0){
			int digit=i%10;
			i=i/10;
			cout<<"\n Number:"<<i<<"\t Digit:"<<digit;
//			num=num*10+digit;
			if(digit%2==0){
				
			cout<<","<<num;
			}
		}
		
			
	}
}
