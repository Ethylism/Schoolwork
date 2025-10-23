// circlecode.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <stdio.h>
#include <math.h>

#define PI 3.14159265358979323846

int main() {
    double radius, height;

    // 输入半径和高度
    printf("请输入圆的半径: ");
    scanf_s("%lf", &radius);

    printf("请输入圆柱的高度: ");
    scanf_s("%lf", &height);

    // 计算并输出结果
    double circumference = 2 * PI * radius;
    double circle_area = PI * pow(radius, 2);
    double cylinder_volume = circle_area * height;
    double sphere_surface_area = 4 * PI * pow(radius, 2);
    double sphere_volume = (4.0 / 3.0) * PI * pow(radius, 3);

    printf("\n计算结果:\n");
    printf("圆周长: %.2lf\n", circumference);
    printf("圆面积: %.2lf\n", circle_area);
    printf("圆柱体积: %.2lf\n", cylinder_volume);
    printf("圆球表面积: %.2lf\n", sphere_surface_area);
    printf("圆球体积: %.2lf\n", sphere_volume);

    return 0;
}

