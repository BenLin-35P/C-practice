#include<stdio.h>
#include<string.h>
struct person{
	char name[10];
	int age;
	float salary;
};
int main(void){
	struct person teacher;
	printf("techer name:");
	scanf("%s",teacher.name);
	printf("techer age:");
	scanf("%d",&teacher.age);
	printf("techer salary:");
	scanf("%f",&teacher.salary);
	printf("Name:%s\n",teacher.name);
	printf("Age:%d\n",teacher.age);
	printf("Salary:%10.2f\n",teacher.salary);
	return 0;
}


