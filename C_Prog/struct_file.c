#include <stdio.h>
//int main(){
////	char gen='T';
////	printf("%c",*(&gen));
//
//	char name[20]="Hello";
//	printf("\n%u",&name);
//	printf("\n%u",&name[0]);
//	printf("\n%u",&name[1]);
//	return 0;
//}

struct person{
	char name[20];
	int age;
	char gen;
};
int main(){
//	struct person p1;
//	struct person p2;
//		printf("Enter name: ");
//		fgets(p1.name, sizeof(p1.name), stdin);
//		printf("enter age: ");
//		scanf("%d",&p1.age);
//		printf("enter gender: ");
//		scanf(" %c",&p1.gen);
//	
//		printf("Name: ");
//    	puts(p1.name); // puts automatically adds a newline
//    	printf("Age: %d\n", p1.age);
//    	printf("Gender: %c\n",p1.gen);
//    fflush(stdin);
//    	printf("Enter name: ");
//		fgets(p2.name, sizeof(p1.name), stdin);
//		printf("enter age: ");
//		scanf("%d",&p2.age);
//		printf("enter gender: ");
//		scanf(" %c",&p2.gen);
//	
//		printf("Name: ");
//    	puts(p2.name); // puts automatically adds a newline
//    	printf("Age: %d\n", p2.age);
//    	printf("Gender: %c\n",p2.gen);
	struct person p[5];
	int i;
	for(i=0;i<5;i++){
		fflush(stdin);
		printf("Enter name: ");
		fgets(p[i].name, sizeof(p[i].name), stdin);
		printf("enter age: ");
		scanf("%d",&p[i].age);
		printf("enter gender: ");
		scanf(" %c",&p[i].gen);
	}
	
	for(i=0;i<5;i++){
		printf("\nName: ");
    	puts(p[i].name); // puts automatically adds a newline
    	printf("Age: %d\n", p[i].age);
    	printf("Gender: %c\n",p[i].gen);
	}
	return 0;
}

