#include <stdio.h>
#define pi 3.141593
#include <math.h>
int main (){
    double s, v, r;
    printf("nhap dien tich s: ");
    scanf("%lf", &s);
    r = sqrt( s/( 4 * pi ));
    v = (4.0 / 3.0 ) * pi * r*r*r;


printf("the tich V = %f ", v);
return 0;

}