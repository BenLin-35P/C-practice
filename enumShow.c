#include <stdio.h>
void main(void){
	enum color{
	 white,red,blue=100,green,black

};
	enum color ball;
	ball=white;
	printf("The color of ball is:%d\n",ball);
	ball=green;
	printf("The color of ball is:%d\n",ball);




}
