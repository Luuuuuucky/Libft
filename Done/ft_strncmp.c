#include "libft.h"

int strncmp(const char *s1, const char *s2, size_t n)
{
    size_t nu;

    nu = 0;
    while(((s1[nu] && s2[nu]) && s1[nu] == s2[nu]) && nu != n)
        nu++;
    return (s1[nu] - s2[nu]);
}
