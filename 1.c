#include <stdio.h>
double max (double first, double second);
int main (void){
    double a,b;
    double result = (scanf("%lf %lf", &a, &b));
    if (result =! 2) {
        printf ("Incorrect input\n");
        return 2; 
    }
    if (a < b) {
        printf("%lf", a);
        return 0;   
    }
    else {
        printf("%lf", b);
    }
    return 0;

}
