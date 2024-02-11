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

    printf("�����������ε������ߣ�\n");
    scanf_s("%lf %lf %lf", &a, &b, &c);

    // ���������������Ƿ��ܹ���һ��������  
    if (a + b > c && a + c > b && b + c > a) {
        double angleA = angle(b, c, a, 1);
        double angleB = angle(a, c, b, 2);
        double angleC = angle(a, b, c, 3);

        double areaTri = area(a, b, c);

        printf("��A�ĽǶȣ�%.2lf��\n", angleA);
        printf("��B�ĽǶȣ�%.2lf��\n", angleB);
        printf("��C�ĽǶȣ�%.2lf��\n", angleC);
        printf("�����ε������%.2lf\n", areaTri);
    }
    else {
        printf("����������߲��ܹ���һ�������Ρ�\n");
    }

    return 0;
}