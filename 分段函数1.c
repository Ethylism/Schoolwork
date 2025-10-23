#include <stdio.h>

int main() 
{
	double x, y;     // 定义双精度浮点数变量 x 和 y

    printf("请输入实数x的值: ");
    scanf_s("%lf", &x);

    if (x < 1) {
        y = x;  
    }
    else if (x < 10) {
        y = 2.0 * x - 1;
    }
    else {
        y = 3.0 * x - 11;
    }

    printf("y = %.2lf\n", x, y);
   

    return 0;
}
