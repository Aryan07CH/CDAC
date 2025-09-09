#include<iostream>
using namespace std;
int main(){
	
//	for(int i=1,j=9;i<=10&&j>=1;i++,j--){
//		cout<<endl<<i<<"+"<<j<<"= "<<i+j;
//	}

	for(int i=1;i<=9;i++){
		cout<<endl<<i<<"+"<<(10-i)<<"= "<<(i+(10-i));
	}
}

,.......................
#include<iostream>
//tea stall v1
//set values tea 10INR coffee 40INR  bunmaska 100INR
//when one choses anything ask for quantity
//ask do you want to end order(y) or no(n) order more
//keep adding data 
//when user says end order
//bill generated
/*
==============================
"chai wala .com
==============================
ITEM      COST    QTY    TOTAL
Tea       10      2      20
BunMaska  100     1      100
==============================
Total cost to pay        120 
*/
using namespace std;
int main()
{
	int choice;
	float tea=10.00f,coffee=40.00f,bm=100.00f;//cost
	int tea_qty=0,coffee_qty=0,bm_qty=0,qty;//quantity
	do
	{
		//menu
		cout<<"\n==============";
		cout<<"\nchai wala .com";
		cout<<"\n==============";
		cout<<"\n1.Tea";
		cout<<"\n2.Coffe";
		cout<<"\n3.Bun Maska";
		cout<<"\n0.Exit";
		cout<<"\n==============";
		cout<<"\n:";
		cin>>choice;
		switch(choice)
		{
			case 1:
				cout<<"\nyou selected Tea";
				cout<<"\nHow many?";
				cin>>qty;
				tea_qty=tea_qty+qty;
				cout<<"\nTotal amount to pay is:"<<tea_qty*tea;
				break;
			case 2:
				cout<<"\nyou selected Coffee";
				cout<<"\nHow many?";
				cin>>qty;
				coffee_qty=coffee_qty+qty;
				cout<<"\nTotal amount to pay is:"<<coffee_qty*coffee;
				break;
			case 3:
				cout<<"\nyou selected Bun-maska";
				cout<<"\nHow many?";
				cin>>qty;
				bm_qty=bm_qty+qty;
				cout<<"\nTotal amount to pay is:"<<bm_qty*bm;
				break;
			case 0:
				//billing info
				cout<<"\n==========================";
				cout<<"\n       chai wala .com";
				cout<<"\n==========================";
				cout<<"\nITEM    COST   QYT   TOTAL";
		        if(tea_qty>0)
					cout<<"\nTea        "<<tea<<"   "<<tea_qty<<"   "<<(tea*tea_qty);
				if(coffee_qty>0)
					cout<<"\nCoffee     "<<coffee<<"   "<<coffee_qty<<"   "<<(coffee*coffee_qty);
				if(bm_qty>0)
					cout<<"\nBun_M      "<<bm<<"   "<<bm_qty<<"   "<<(bm*bm_qty);
				cout<<"\n==========================";
				cout<<"\nTotal Amount:           "<<(tea*tea_qty)+(coffee*coffee_qty)+(bm*bm_qty);
				cout<<"\nVisit again soon.....";
				break;
			default:
				cout<<"\nwrong option selected.";
				break;
				
		}
		cout<<"\nWant to order more items 1(yes)/0(no)\n";
		cin>>choice;
		if(choice==1)
			continue;
		else if(choice==0)
			{
				
				
				
			}
	}while(choice!=0);//User does not exit 
 
 
}

=====°=========≠==========
#include<iostream>
//beaking digits
using namespace std;
int main()
{
int number;
cout<<"\nEnter a number:";
cin>>number;
while(number>0)
{
int digit=number%10;
number=number/10;
cout<<"\nnumber:"<<number<<"\tdigit:"<<digit;
//5 blank space
}
}

///prime

#include<iostream>
using namespace std;
int main()
{
int number,i;
bool flag=true;//set
cout<<"\nEnter a number:";
cin>>number;
for(i=2;i<number;i++)
{
if(number%i==0)//signal
{
flag=false;//reset
break;
}
cout<<"\ndiv with "<<i<<" flag is:"<<flag;
}
if(flag)//flag==true
cout<<endl<<number<<" yes it is prime";
else
cout<<endl<<number<<" no it is not prime";
}



#include<iostream>
//1/2+3/4+5/6+7/8...+n
using namespace std;
int main()
{
float n,i,sum=0.0f;
cout<<"\nEnter number:";
cin>>n;
for(i=1;i<=2*n;i=i+2)
{
cout<<i<<"/"<<(i+1)<<" ";
sum+=((i)/(i+1));
}
cout<<"\nSum of series is:"<<sum;
}



PATTERNS
#include<iostream>
//
using namespace std;
int main()
{
int i,j;
for(i=1;i<=5;i++)//controller
{
for(j=1;j<=i;j++)//printer
{
cout<<"X";
}
cout<<"\n";//next line
}
}