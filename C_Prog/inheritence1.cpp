#include <iostream>
using namespace std;

class parent{
	int value;
	public:
		
	parent(int x){
		value=x;
		cout<<"Parent Object is Created"<<endl;
	}
	void setvalue(int v){
		value=v;
	}
	int getvalue(){
		return value;
	}
};

class child:public parent{
	string name;
	public:
		
	child(string n){
		name= n;
		cout<<"Child Object is Created"<<name<<endl;
	}
	child(){
	}
	string getname(){
		return name;
	}
	
	void setname(string n){
		name=n;
	}
};

int main(){
//	parent p(82);
//	p.setvalue(29);
//	cout<c.value();
	child("Raj");
}
