#include "libmx.h"

void mx_printchar(char c) {
    char t[2];
    t[0] = c;
    t[1] = '\0';
    write(1, t, 1);
}  

//int main(){
//    mx_printchar('a');
//}  
