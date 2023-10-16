#include "libft.h"
#include "string.h"

char *ft_strnstr(const char *haystack, const char *needle, size_t len);

int main(int argc, char **argv)
{
    printf("Mine     : %s\n", ft_strnstr(argv[1], argv[2], atoi(argv[3])));
    printf("Original : %s", strnstr(argv[1], argv[2], atoi(argv[3])));
}
