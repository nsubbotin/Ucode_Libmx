#include <stdlib.h>

void mx_strdel(char**);
void mx_del_strarr(char ***arr){
    while(*arr != NULL)
        mx_strdel(*arr);
    free(**arr);
    **arr = NULL;
}
