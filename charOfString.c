#include <stdio.h>

int main(void){
	char str[5],i;		

	printf("請輸入字串 (最多五個字)");
	scanf("%s",str);


	
	for(i=0;i<5;i++){
	printf("第%d個字元為:%c \n",i+1,str[i]);

}
	return 0;
}
