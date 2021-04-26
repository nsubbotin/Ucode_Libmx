#include "libmx.h"

double mx_pow(double a, unsigned int b){
    double r = 1;
    for (unsigned int i = 0; i < b; i++)
        r *= a;
    return r;
}

/*
int main(){
    printf("%f",mx_pow(3, 3));
    printf("%f",mx_pow(2.5, 3));
    printf("%f",mx_pow(2, 0));
}
*/
