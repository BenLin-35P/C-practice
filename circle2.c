#include <stdio.h>
	const double PI =3.14159;
	int main(void){
		double  radius,perimeter,area;
		printf("請輸入半徑\n");
		scanf("%lf",&radius);	
		perimeter=radius*2*PI;
		area=PI*radius*radius;
		printf("圓面積為：%lf\n",area);
		printf("圓周長為：%lf\n",perimeter);
		return 0;
			





}




