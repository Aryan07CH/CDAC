//3. Astrological Sign Finder

#include<iostream>
using namespace std;

int main(){
	int dob;
	string month;
	
	cout<<"Enter the Day of birth(1-31): ";
	cin>>dob;
	cout<<"Enter the Month(in lowercase only): ";
	cin>>month;
	
	if((month=="march" && dob>=21 && dob<=31) || (month=="april" && dob<=19))
		cout<<"\n Your Astrological Sign is: Aries";
	else if((month=="april" && dob>=20 && dob<=30) || (month=="may" && dob<=20))
		cout<<"\n Your Astrological Sign is: Taurus";
	else if((month=="may" && dob>=21 && dob<=31) || (month=="june" && dob<=20))
		cout<<"\n Your Astrological Sign is: Gemini";
	else if((month=="june" && dob>=21 && dob<=30) || (month=="july" && dob<=22))
		cout<<"\n Your Astrological Sign is: Cancer";
	else if((month=="july" && dob>=23 && dob<=31) || (month=="august" && dob<=22))
		cout<<"\n Your Astrological Sign is: Leo";
	else if((month=="august" && dob>=23 && dob<=31) || (month=="september" && dob<=22))
		cout<<"\n Your Astrological Sign is: Virgo";
	else if((month=="september" && dob>=23 && dob<=30) || (month=="october" && dob<=22))
		cout<<"\n Your Astrological Sign is: Libra";
	else if((month=="october" && dob>=23 && dob<=31) || (month=="november" && dob<=21))
		cout<<"\n Your Astrological Sign is: Scorpio";
	else if((month=="november" && dob>=22 && dob<=30) || (month=="december" && dob<=21))
		cout<<"\n Your Astrological Sign is: Sagittarius";
	else if((month=="december" && dob>=22 && dob<=31) || (month=="january" && dob<=19))
		cout<<"\n Your Astrological Sign is: Capricorn";
	else if((month=="january" && dob>=20 && dob<=30) || (month=="february" && dob<=18))
		cout<<"\n Your Astrological Sign is: Aquarius";
	else if((month=="february" && dob>=19 && dob<=29) || (month=="march" && dob<=20))
		cout<<"\n Your Astrological Sign is: Pisces";
	else
		cout<<"\n Invalid Date";
//	cout<<dob;
//	cout<<month;
}
