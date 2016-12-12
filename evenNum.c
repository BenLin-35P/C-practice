#include <stdio.h>

int main(void){
	int num[5],i;		
	for(i=0;i<5;i++){
	printf("num[%d]=",i);
	scanf("%d",&num[i]);


}
	printf("偶數的陣列有:");
	
	for(i=0;i<5;i++){
	if(i%2==0)	
	printf("num[%d]=%d  ",i,num[i]);
	else
	;

}
	printf("\n");
	return 0;
}
