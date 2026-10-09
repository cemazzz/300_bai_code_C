#include <stdio.h>
#include <math.h>
int main()
{
    double xC, yC, xM, yM, R;
    printf("toa do tam C (xC, yC)?: ");
    scanf("%lf %lf", &xC, &yC);

    printf("ban kinh R: ");
    scanf("%lf", &R);

    printf("toa do M(xM, yM)?: ");
    scanf("%lf %lf", &xM, &yM);

    if ( R > (sqrt(pow(xC - xM, 2) + pow(yC - yM, 2))))
    {
        printf("M nam trong C");
    }
    else
    {
        printf("M khong trong C");
        
    }
    return 0;
}
