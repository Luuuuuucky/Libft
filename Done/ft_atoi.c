#include "libft.h"

int ft_atoi(const char *nptr)
{
    int i;
    int neg;
    int nb;

    i = 0;
    neg = 0;
    nb = 0;
	while (nptr[i] <= 32)
		i++;
	if(nptr[i] == '-' || nptr[i] == '+')
	{
		if(nptr[i] == '-')
			neg++;
		i++;
		if(i == 2)
			return 0;
    }
    while(nptr[i] >= '0' && nptr[i] <= '9')
    {
        nb = (nb * 10) + (nptr[i] - 48);
        i++;
    }
    if (neg == 1)
        nb *= -1;
    return nb;
}
