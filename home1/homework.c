#include <stdio.h>

void main(){
    double x;
    scanf("%lf", &x);
    double week = (4 * x - x) / 3* 52;
    printf("%.2f\n", week);
    return 0;
}