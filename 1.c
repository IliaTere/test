#include <stdio.h>
// test update 1.1
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
        while (b == a) {
            b = b - 1;
            printf("%lf", b);
        }
        
    }
    return 0;

}
