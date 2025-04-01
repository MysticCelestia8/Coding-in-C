#include <stdio.h>
#include <string.h>
int main(){
	struct Database{
		int age;
		int roll;
		int marks;
		char name[80];
	};
	int n;
	printf("Enter a number:\n");
	scanf("%d",&n);
	struct Database stud[n];
	for(int i = 0;i<n;i++){
		printf("Enter Age:\n");
		scanf("%d",&stud[i].age);
		printf("Enter Roll:\n");
		scanf("%d",&stud[i].roll);
		printf("Enter Age:\n");
		scanf("%d",&stud[i].marks);
		printf("Enter Name:\n");
		scanf("%s",&stud[i].name);
	}
	for(int i = 0;i<n;i++){
		
		printf("Age: %d",stud[i].age);
		printf("Roll: %d",stud[i].roll);
		printf("Marks: %d",stud[i].marks);
		printf("Name: %s",stud[i].name);
	}
	return 0 ;
}
