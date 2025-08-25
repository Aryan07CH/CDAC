#include <stdio.h>
#include <string.h>

struct person{
	char name[20];
	int age;
	char gen;
};

//struct person setdata(){
//	struct person temp;
//	strcpy(temp.name,"New person");
//	temp.age=10;
//	temp.gen="-";
//	
//	return temp;
//}
struct person setdata1(char n[],int a,char g){
	struct person temp;
	strcpy(temp.name,n);
	temp.age=a;
	temp.gen=g;
	
	return temp;
}
struct person setdata(){
	struct person temp;
	printf("Enter your name: ");
//    fgets(name, sizeof(name), stdin);
	scanf("%s",temp.name);

    printf("Enter your age: ");
    scanf("%d", &temp.age);

    printf("Enter your Gender: ");
    scanf(" %c", &temp.gen);

	return temp;
}
void setdata2(struct person *r){
	printf("Enter your name: ");
//    fgets(name, sizeof(name), stdin);
	scanf("%s",r->name);

    printf("Enter your age: ");
    scanf("%d", &r->age);

    printf("Enter your Gender: ");
    scanf(" %c", &r->gen);
}
void printdata(struct person p){
	printf("\n %s,%d,%c",p.name,p.age,p.gen);
}
int main(){
	struct person p,q,r,s,t;
	p=setdata();
	q=setdata1("rohit",39,'M');
	setdata2(&r);
	printdata(p);
	printdata(q);
	printdata(r);
	
}

