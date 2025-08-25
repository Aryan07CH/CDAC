#include <stdio.h>
#include <stdlib.h>

//struct node{
//	int data;
//struct node *next;
//struct node *prev;
//};
struct node{
	int age;
	float wt;
};

void addnode(){
	
}
int main(){
	struct node f,*ptr;
	
	ptr=(struct node *)malloc(sizeof(struct node));
	ptr->age=10;
	ptr->wt=10.23f;
	
	printf("\n age is %d ",ptr->age);
	printf("\n WT is %.2f ",ptr->wt);
	free(ptr);
	
	
	
	return 0;
}
