//Tea Stall v1
#include <iostream>
using namespace std;

int main(){
	//Tea v2->
	/*
	int ch,t,c,b;
	float tea=10.00f,cof=40.00f,bm=100.00f;
	do{
		//menu
		cout<<"\n==================";
		cout<<"\nChaiWala.com";
		cout<<"\n==================";
		cout<<"\n1. Tea \t 10.00";
		cout<<"\n2. Coffee \t 40.00";
		cout<<"\n3. Bun Maska \t100.00";
		cout<<"\n0. Exit ";
		cout<<"\n==================";
		cout<<"\n :";
		cin>>ch;
		switch(ch){
			case 1:
				cout<<"\n You Order Tea";
				cout<<"\nEnter the Quantity: ";
				cin>>t;
				cout<<"\n Your total bill is: "<<t*tea;
				break;
			case 2:
				cout<<"\n You Order Coffee";
				cout<<"\nEnter the Quantity: ";
				cin>>c;
				cout<<"\n Your total bill is: "<<c*cof;
				break;
			case 3:
				cout<<"\n You Order Bun Maska";
				cout<<"\nEnter the Quantity: ";
				cin>>b;
				cout<<"\n Your total bill is: "<<b*bm;
				break;
			case 0:
				cout<<"\n Visit Again Soon...........";
				break;
			default:
				cout<<"Wrong Option Selected....";
				break;
		}
		
	}while(ch!=0);*/
	
	//Tea Stall v3
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
			break;
	}while(choice!=0);//User does not exit 
 //billing info
				cout<<"\n==========================";
				cout<<"\n       chai wala .com";
				cout<<"\n==========================";
				cout<<"\nITEM  \t  COST \t  QYT  \t TOTAL";//   \t gives 5 blank spaces
		        if(tea_qty>0)
					cout<<"\nTea    \t    "<<tea<<" \t  "<<tea_qty<<"  \t "<<(tea*tea_qty);
				if(coffee_qty>0)
					cout<<"\nCoffee     "<<coffee<<"   "<<coffee_qty<<"   "<<(coffee*coffee_qty);
				if(bm_qty>0)
					cout<<"\nBun_M      "<<bm<<"   "<<bm_qty<<"   "<<(bm*bm_qty);
				cout<<"\n==========================";
				cout<<"\nTotal Amount:           "<<(tea*tea_qty)+(coffee*coffee_qty)+(bm*bm_qty);
 

}


