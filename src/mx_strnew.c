#include "libmx.h"

char *mx_strnew(const int size) {
    char *s = malloc(size + 1);
    s[size] = '\0';
    for (int i = 0; i < size; i++)
        s[i] = '\0';

    if (s == NULL)
        return NULL;
    return s;
    free(s);
}

/*
int main(){
    char *s = mx_strnew(10);
    for (int i = 0; i < size; i++)
        s[i] = 'a';
    printf("%lu\n", strlen(s));
}
*/
