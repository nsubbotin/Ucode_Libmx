#include "libmx.h"

void mx_printchar(int n);
void mx_printint(int n) {
    int a = n;
    int c = 0;
    while (a > 0) {
        a /= 10;
        c++;
    }

    for (int i = 0; i < c; i++) {
        int t = mx_pow(10, c - i - 1);
        mx_printchar((n / t) % 10 + 48);
    }
}

int mx_pow(int a, int b) {
    int r = 1;
    for (int i = 0; i < b; i++)
        r *= a;
    return r;
}
