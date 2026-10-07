#include <stdio.h>
#include <math.h>
int main()
{
    double Xa, Xb, Ya, Yb;
    printf("nhap toa do diem A: (Xa,Ya)\nXa = ");
    scanf("%lf", &Xa);
    printf("Ya = ");
    scanf("%lf", &Ya);
    printf("nhap toa do diem b: (Xb,Yb)\nXb = ");
    scanf("%lf", &Xb);
    printf("Yb = ");
    scanf("%lf", &Yb);
    printf("khoang cach |AB| la: %.2lf\n", sqrt(pow(Xb - Xa, 2) + pow(Yb - Ya, 2)));

    return 0;
}
