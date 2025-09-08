#include <iostream>
#include<cmath>
using namespace std;

int main(){
	int a,b,c;
	cout<<"Enter sides of the triangle: \n";
	cin>>a>>b>>c;
	if(a==b&&a==c&&b==c)
		cout<<"Triangle is Equilateral Triangle";
	else if(a==b || (a==c) || (b==c))
			cout<<"Triangle is Isosceles Triangle";

	else//default execution where every thing fails
		cout<<"Triangle is Scalene Triangle";
}

