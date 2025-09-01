#include <iostream>
using namespace std;

class book{
	string title;				//instance members
	int noofpages;
	string author;
//	int b_count;
	int *price;
public:
	static int b_count;
	void describe(){
		cout<<"Title: "<< title<<endl;
		cout<<"Author: "<<author<<endl;
		cout<<"Noofpages: "<<noofpages<<endl;
	}
	book(){					//NON parametarize constucter , constucter is of 3 types
		title="None";
		author="None";
		noofpages=0;
		book::b_count++;				//every constucter must a counter
	}
	book(string x,string y,int noofpages){					//parametarize constucter
		title=x;
		author=y;
		this->noofpages=noofpages;
		book::b_count++;
		price=new int;
		*price=0;
	}
	~book(){
		delete(price); 				//it frees the memory in his whole complilation
		book::b_count--;
		cout<<"\n Obj Destroied"<<	book::b_count;
	}
};
int book::b_count=0;
int main(){
	book b,b1("Harry Potter","J.K.Rowling",200),b2,b3,b4;		//b->default , b1->coustamize
	book *b5,*b6,*b7;
	b5=new book("Pirates","Johnny",200);
	b5->describe();
	delete(b5);
	b.describe();
	b1.describe();
	cout<<"Total book count:"<<book::b_count;
//	cout<<
}
