#include<iostream>
//1/2+3/4+5/6+7/8...+n
using namespace std;
	int main(){
	float n,i,sum=0.0f,term=1;
	cout<<"\nEnter number:";
	cin>>n;
	for(i=1;i<=2*n;i=i+2){
		cout<<term*i<<"/"<<(i+1)<<" ";
		sum+=((term*i)/(i+1));
		term*=-1;
	}
	cout<<"\nSum of series is:"<<sum;
}
