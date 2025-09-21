/*
#include<iostream>
using namespace std;
//paas by value//call by value :In this, data is not passed 
//only the value is replicated, making changes appear only local. 
void swap(int no1,int no2)
{
	int temp;
	cout<<"\n	start: in function no1:"<<no1<<" @"<<&no1<<" no2:"<<no2<<" @"<<&no2;
	temp=no1;
	no1=no2;
	no2=temp;
	cout<<"\n	end: in function no1:"<<no1<<" no2:"<<no2;
}
int main()
{
int no1=100,no2=200;
cout<<"\nstart: in main no1:"<<no1<<" @"<<&no1<<" no2:"<<no2<<" @"<<&no2;
swap(no1,no2);
cout<<"\nend: in main no1:"<<no1<<" no2:"<<no2;
}
*/

/*
#include<iostream>
using namespace std;
//paas by address//call by address :In this, data is not passed but address is
//changes are done and seen globally
void swap(int *no1,int *no2)
{
	int temp;
	cout<<"\n	start: in function no1:"<<*no1<<" @"<<no1<<" no2:"<<*no2<<" @"<<no2;
	temp=*no1;
	*no1=*no2;
	*no2=temp;
	cout<<"\n	end: in function no1:"<<*no1<<" no2:"<<*no2;
}
int main()
{
int no1=100,no2=200;
cout<<"\nstart: in main no1:"<<no1<<" @"<<&no1<<" no2:"<<no2<<" @"<<&no2;
swap(&no1,&no2);
cout<<"\nend: in main no1:"<<no1<<" no2:"<<no2;
}
*/
/*
#include<iostream>
using namespace std;
//paas by reference :In this, data is not passed but address is
//changes are done and seen globally
void swap(int &no1,int &no2)
{
	int temp;
	cout<<"\n	start: in function no1:"<<no1<<" @"<<&no1<<" no2:"<<no2<<" @"<<&no2;
	temp=no1;
	no1=no2;
	no2=temp;
	cout<<"\n	end: in function no1:"<<no1<<" no2:"<<no2;
}
int main()
{
int no1=100,no2=200;
cout<<"\nstart: in main no1:"<<no1<<" @"<<&no1<<" no2:"<<no2<<" @"<<&no2;
swap(no1,no2);
cout<<"\nend: in main no1:"<<no1<<" no2:"<<no2;
}
*/

/*
//Minimun of two
#include<iostream>
using namespace std;

int min(int no1,int no2)
{
	if(no1<no2)
		return no1;
	else	
		return no2;
}
int main()
{
int no1,no2;
cout<<"\nEnter 2 numbers:\n";
cin>>no1>>no2;

int min_is=min(no1,no2);//use variable to store
cout<<"\nmin is:"<<min_is;

//or
cout<<"\nmin is:"<<min(no1,no2);//directly print the answer


}
*/
/*
#include<iostream>
using namespace std;
//Without modifying the function, 
//rewrite the code(main) to print the minimum of four numbers.
int min(int no1,int no2)
{
	if(no1<no2)
		return no1;
	else	
		return no2;
}
int main(){
    int no1,no2,no3,no4;
    cout<<"\nEnter 2 numbers:\n";
    cin>>no1>>no2>>no3>>no4;
    
    cout<<"\nmin is:"<<min(min(no1,no2),min(no3,no4));
    
}
*/
