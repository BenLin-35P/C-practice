#include<stdio.h>
#include<string.h>
union money{
	int student;
	float teacher;
};
int main(void){
	union money john;
	printf("student money:");
	scanf("%d",&john.student);
	printf("The student's money is:%d\n",john.student);
	printf("techer money:");
	scanf("%f",&john.teacher);
	printf("The teacher's monet is:%10.2f\n",john.teacher);
	return 0;
}


