#include "libmx.h"

char *mx_strcpy(char *dst, const char *src){
    char *s = dst;
    while (*src)
        *dst++ = *src++;
    *dst = 0;
    return s;
}

/*
int main(){
    char src = "luck";
    char dst[12];
    mx_strcpy(dst, src);
    printf("%s\n, dst");
    printf("%d\n", mx_strlen(dst));
}
*/
