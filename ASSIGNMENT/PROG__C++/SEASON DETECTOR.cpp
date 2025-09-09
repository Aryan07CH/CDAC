//2. SEASON DETECTOR

#include<iostream>
using namespace std;

int main(){
	int month,day;
	cout<<"Enter the Month(1-12): ";
	cin>>month;
	cout<<"Enter the Day(1-31): ";
	cin>>day;
	
	if((month==12 && day>=21 && day<=31) || (month==1) || month==2||(month==3 && day<=19))
		cout<<"\nThe Season is Winter";
	else if((month==3 && day>=20 && day<=31) || (month==4) || month==5||(month==6 && day<=20))
		cout<<"\nThe Season is Spring";
	else if((month==6 && day>=21 && day<=30) || (month==7) || month==8||(month==9 && day<=21))
		cout<<"\nThe Season is Summer";
	else if((month==9 && day>=22 && day<=31) || (month==10) || month==11||(month==12 && day<=20))
		cout<<"\nThe Season is Autumn";
	else
		cout<<"Invalid Date";
}
