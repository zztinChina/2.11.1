#include <stdio.h>  
#include <math.h>  

#define PI 3.14159265  

double angle(double a, double b, double c, int n) {
    double cosAngle = (a * a + b * b - c * c) / (2 * a * b);
    return acos(cosAngle) * 180 / PI;
}

double area(double a, double b, double c) {
    double s = (a + b + c) / 2;
    return sqrt(s * (s - a) * (s - b) * (s - c));
}

int main() {
    double a, b, c;

    printf("请输入三角形的三条边：\n");
    scanf_s("%lf %lf %lf", &a, &b, &c);

    // 检查输入的三条边是否能构成一个三角形  
    if (a + b > c && a + c > b && b + c > a) {
        double angleA = angle(b, c, a, 1);
        double angleB = angle(a, c, b, 2);
        double angleC = angle(a, b, c, 3);

        double areaTri = area(a, b, c);

        printf("角A的角度：%.2lf度\n", angleA);
        printf("角B的角度：%.2lf度\n", angleB);
        printf("角C的角度：%.2lf度\n", angleC);
        printf("三角形的面积：%.2lf\n", areaTri);
    }
    else {
        printf("输入的三条边不能构成一个三角形。\n");
    }

    return 0;
}