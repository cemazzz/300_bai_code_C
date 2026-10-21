#include <stdio.h>
#include <math.h>
#define esp 1e-6

double tinhS(double xA, double yA, double xB, double yB, double xC, double yC){
    return 0.5 *fabs(xA*yB - xB*yA + xB*yC - xC*yB+ xC*yA - xA*yC);
}
int main(){
    double xA, xB, xC, yA, yB, yC, xM, yM;
    double d;
    printf("A(xA, yA): ");
    scanf("%lf %lf",&xA, &yA);

    printf("B(xB, yB): ");
    scanf("%lf %lf",&xB, &yB);

    printf("C(xC, yC): ");
    scanf("%lf %lf",&xC, &yC);

    printf("M(xM, yM): ");
    scanf("%lf %lf",&xM, &yM);
    d = tinhS( xM, yM, xA, yA, xB, yB ) + tinhS( xM, yM, xA, yA, xC, yC )+ tinhS( xM, yM, xB, yB, xC, yC ) - tinhS( xA, yA, xB, yB, xC, yC ); 
    if ( d > 0 ) printf( "M nam ngoai tam giac ABC" ); 
    else  
        if (tinhS( xM, yM, xA, yA, xB, yB ) == 0 || 
            tinhS( xM, yM, xA, yA, xC, yC ) == 0 || 
            tinhS( xM, yM, xB, yB, xC, yC ) == 0 ) 
            printf( "M nam tren canh tam giac ABC" ); 
    else printf( "M nam trong tam giac ABC" );
    
    
    






    return 0;
}   