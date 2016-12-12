#include <stdio.h>
#include <string.h>
int main(void){
	typedef struct{
		char name[10];
		int age;
		float salary;
}Person;
	Person teacher[3];
	int i;	
	for (i=0;i<3;i++){
		printf("Teacher name:");
		scanf("%s",teacher[i].name);
		printf("Teacher age:");
		scanf("%d",&teacher[i].age);
		printf("Teacher saraly:");
		scanf("%f",&teacher[i].salary);
	}

	for (i=0;i<3;i++){
		printf("Number %d=>name:%s,Age:%d,Salary:%10.2f\n",i,teacher[i].name,teacher[i].age,teacher[i].salary);
		
}

		return 0;
}
