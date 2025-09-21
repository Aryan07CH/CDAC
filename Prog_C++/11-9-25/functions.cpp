/*
//Write two Functions
//1. USD to INR
//2. INR to USD
//Ask amount from the user
//Select either 1
#include <iostream>
using namespace std;

float usd_to_inr(float usd){

    return usd*90;
}
float inr_to_usd(float inr){

    return inr/90;
}

int main(){
    int ch;
    float amount;
    cout<<"Enter Amount: ";
    cin>>amount;
    cout<<"\n1. USD TO INR \n2. INR TO USD";
    cout<<"\nEnter your Choise: ";
    cin>>ch;

    switch(ch){
        case 1:
            cout<<usd_to_inr(amount);
            break;
        case 2:
            cout<<inr_to_usd(amount);
            break;
        default:
            cout<<"\nWrong Choise....";
            break;
    }
    return 0;
}
*/
/*
#include<iostream>
using namespace std;

float area(float r){
    return 3.14*r*r;
}
float area(float l,float b){
    return l*b;
}

int main(){
    float r,l,b;
    cout<<"\nEnter The Radii of Circle: ";
    cin>>r;
    cout<<"\nArea of circle is:"<<area(r);
    cout<<"\nEnter The len and brea of Rectangle: ";
    cin>>l>>b;
    cout<<"\nArea of Rectangle is:"<<area(l,b);
}
*/
/*
#include<iostream>
using namespace std;

string intro(string name,string state="Maharashtra",string nationality="India"){
    cout<<"\n Name is "<<name<<" Nationality is "<<nationality<<" and State is "<<state;
}
int main(){
    intro("Joseph","German","Munich");
    intro("Rajesh");
    intro("John","Goa");
}
*/
/*
#include<iostream>
using namespace std;
bool flag=false;
bool can_vote(int age){
    if(age>18)
        return true;
    else
        return false;
}
void reg(string name,char gen,int age){
    // cout<<"Name: "<<name<<endl;
    // cout<<"Gender: "<<gen<<endl;
    // cout<<"Age: "<<age<<endl;
    
    // if(can_vote(age))
    //     cout<<"\nCan Vote";
    // else
    //     cout<<"Can Not";
    
    cout<<(can_vote(age)?"Can Vote":"Can Not");
}

int main(){
    int age;
    string name;
    char gen;
    cout<<"Enter Name: ";
    cin>>name;
    cout<<"Enter Gender: ";
    cin>>gen;
    cout<<"Enter Age: ";
    cin>>age;
    reg(name,gen,age);
}
*/
/*
//GCD:

#include<iostream>
using namespace std;

int gcd(int no1,int no2){
    if(no1%no2==0)
        return no2;
    else
        return gcd(no2,no1%no2);
}
int main(){
    int no1,no2;
    cout<<"Enter 2 Numbers: ";
    cin>>no1>>no2;
    if(no2>no1){
        int temp=no1;
            no1=no2;
            no2=temp;
    }
}
*/
/*
#include<iostream>
using namespace std;
Power
int pow(int i,int j){
    if(j==0)
        return 1;
    else
        return i*pow(i,j-1);
}
int main(){
    cout<<pow(2,3);
}
*/

/*
#include <iostream>
using namespace std;
void doubler(int a[],int size)
	{
		for(int i=0;i<size;i++)
			a[i]=a[i]*2;
    }
void printer(int a[],int size) 
{
	cout<<"\nArray has:";
	for(int i=0;i<size;i++)
		cout<<a[i]<<",";
}
int main() 
{
	int a[]={1,2,3,4,5,6},size=6;
	cout<<"\nStart:";
	printer(a,size);
	doubler(a,size);
	cout<<"\nend:";
	printer(a,size);
}
*/

/*
#include <iostream>
using namespace std;
void sum_of_set(int a[],int n,int sum){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]+a[j]==5)
                cout<<a[i]<<","<<a[j]<<endl;
        }
    }
}
int main() 
{
	int a[]={1,2,3,4},n=4,sum;
	cout<<"\nStart:";
    sum_of_set(a,4,5);
}
*/
/*
#include<iostream>
using namespace std;

int share(int s[],int n){
    int profit=0,buy,sale;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            // profit=(s[j]-s[i]);
            if(profit<s[j]-s[i])
                profit=(s[j]-s[i]);
                buy=i;
                sale=j;
        }
    }
    // cout<<"Profit: "<<profit<<endl;
    cout<<"Buy at: "<<buy<<endl;
    cout<<"Sale at: "<<sale<<endl;
    return profit;
}

int main(){
    int s[]={7,2,0,6,12,3,6},n=7;
    share(s,n);
}
*/

#include<iostream>
//find min/max
using namespace std;
int winn(int a[],int size){
  int max,win,i;
  win=max=a[0];//local ref
  for(i=1;i<size;i++){
  	if(a[i]>max){
  		max=a[i];//update max
        win=i;
  }  
}
cout<<"The winner is User "<<win+1<<" with a bid of "<<max;
}
int main(){
    int a[]={110,450 ,320, 99, 250, 500, 480, 390,150,220},size=10;
    winn(a,size);
}