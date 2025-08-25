#include <stdio.h>
int main(){
	char name[20];
	int age;
	char gen;
	char add[20];
	float height;
	float weight;
	int DOB;
//	printf("hello world \n"); //literal section
//	printf("%s\n",name);
//	printf("Sum of two num is %d",10+10);
//	printf("Age of a person is %d",2025-2005);
//	printf("%s am %d year old",name,2025-2005);
//	printf("Enter your name: ");
//	scanf("%s",name);
//	printf("Enter your age: ");
//	scanf("%d",&age);
//	printf("Enter your Gender: ");
//	scanf(" %c",&gen);
//	printf("Enter your name: ");
//    fgets(name, sizeof(name), stdin);
//
//    printf("Enter your age: ");
//    scanf("%d", &age);
//
//    printf("Enter your Gender: ");
//    scanf(" %c", &gen);
//
//    printf("%s is %d years old and gender is %c\n", name, age, gen);
    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);

    printf("Enter your age: ");
    scanf("%d", &age);
    printf("Enter your Gender: ");
    scanf(" %c", &gen);
    printf("Enter your Address: ");
    fgets(add, sizeof(add), stdin);

    printf("Name: ");
    puts(name); // puts automatically adds a newline
    printf("Age: %d\n", age);
    printf("Gender: %c\n", gen);
    

    return 0;
}



