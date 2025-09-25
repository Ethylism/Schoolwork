#include <stdio.h>
#define PI 3.1415926
float area_calculation(float r); //area_calculation函数的声明
int main() 
{	
	float radius,area;
	printf("请输入圆的半径：");
	scanf_s("%f",&radius);
	area = area_calculation(radius);   //area_calculation函数的调用
	printf("该圆的面积是 %.2f\n",area);
    return 0;
}
/*area_calculation函数的定义*/
float area_calculation(float r){     
	float result;
	result = PI * r * r;
	return result;
}