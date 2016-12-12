#include <stdio.h>

int main(void){
	char str[3][10],i;		
	for(i=0;i<3;i++)	{

	printf("請輸入第%d個字串",i+1);
	scanf("%s",str[i]);


}
	
	for(i=0;i<3;i++){
	printf("%s \n",str[i]);

}
	return 0;
}
