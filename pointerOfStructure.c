#include <stdio.h>
#include <string.h>

struct Student{
	int age;
	int marks;
	char name[40];

};

int main(){
	struct Student st1; //declaring the name of the struct element

	struct Student *Stud; //pointer of datatype struct
        Stud = &st1; //Stores the address of the stuct element	

	printf("Enter the name,age and marks of the student:\n");
	scanf("%s",Stud->name);
	scanf("%d",&(Stud->age));
	scanf("%d",&(Stud->marks));
	
	printf("Details of the Student\n");
	printf("\n");
	printf("%s\n",Stud->name);
	printf("%d\n",Stud->age);
        printf("%d\n",Stud->marks);
	printf("\n");
	return 0;
}
