#include <stdio.h>

int main(void){
		int num[3][3],i,j,colsum[3]={0},rowsum[3]={0};		
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("num[%d][%d]=",i,j);
			scanf("%d",&num[i][j]);

			printf("\b");

}
			
}
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			rowsum[i]+=num[i][j];
			colsum[i]+=num[j][i];
}

}
		for(j=0;j<3;j++){
			printf("第%d列的總和為：%d\n",j+1,rowsum[j]);
			printf("第%d行的總和為：%d\n",j+1,colsum[j]);
	}
	
	return 0;
}
