#include <stdbool.h>

bool mx_isspace(int c)
{
    return c == ' ' ||
        c == '\n' ||
        c == '\t' ||
        c == '\v' ||
        c == '\f' || 
        c == '\r';
}
