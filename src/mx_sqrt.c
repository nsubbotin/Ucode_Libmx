#include "libmx.h"
int mx_sqrt(int x){
    for (int i = 0; i <= x / 2; i++)
        if (i * i == x) return i;
    return 0;
}

/*
int main()
{
 	printf("%d\n", mx_sqrt(6));
 	printf("%d\n", mx_sqrt(0));
 	printf("%d\n", mx_sqrt(4));
 	printf("%d\n", mx_sqrt(8));
 	printf("%d\n", mx_sqrt(16));
 	printf("%d\n", mx_sqrt(-6));
 	printf("%d\n", mx_sqrt(156549));
 	printf("%d\n", mx_sqrt(65025));
}
*/
