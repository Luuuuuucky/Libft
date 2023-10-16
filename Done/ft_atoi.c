#include "libft.h"

int ft_atoi(char *str)
{
    int i;
    int neg;
    int nb;

    i = 0;
    neg = 0;
    nb = 0;
    while(str[i] == '-' || str[i] == '+')
    {
        if(str[i] == '-')
            neg++;
        i++;
        if(i == 2)
            return 0;
    }
    while(str[i] >= '0' && str[i] <= '9')
    {
        nb = (nb * 10) + (str[i] - 48);
        i++;
    }
    if (neg == 1)
        nb *= -1;
    return nb;
}
