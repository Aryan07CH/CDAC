#include <iostream>
using namespace std;

class A{
	protected:
	int valA,valB,valC;
	public:
		
		A(int a,int b,int c){
		valA=a;
		valB=b;
		valC=c;
	}
	A(){
		valA=0;
	}
	int getvalA(){
		return valA;
	}
};

class B:public A{
	string name;
	string gen;
	public:
		B(string n,string g,int x,int y,int z):A(x,y,z){
			this->name=n;
			gen=g;
		}
		void displayval(){
//			cout<<getvalA();
			cout<<"\nA:"<<valA;
			cout<<"\nB:"<<valB;
			cout<<"\nC:"<<valC;
			cout<<"\nName:"<<name;
			cout<<"\nGen:"<<gen;
		}
};

int main(){
	B b("adfs0","f",54,78,89);
	b.displayval();
	return 0;
}
