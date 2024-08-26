#include <unistd.h>
#include <stdio.h>


int atoi(char *str)
{
    int i;
	int	sign;
	int	total;
	sign = 1;
    i = 0;
	total = 0;
	while(str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i ++;
	while(str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = sign * -1;
		i ++;
	}
	while(str[i] >= '0' && str[i] <= '9')
	{
		total = total * 10 + (str[i] - 48);
		i ++;
	}
	return (total * sign);
}

int main(void)
{
    printf("%d", atoi("\n\t\v\f-----234jasdfkl;az"));
    return 0;
}

// int ft_putnbr(char *str)
// {
//     int i;
//     int start;

//     start = 0;
//     i = 0;
//     while(str[i] != '\0')
//     {
//         if (str[i] >= '0' && str[i] <= '9')
//             start = 1;
//         if (start == 1 && str[i] < '0' && str[i] > '9')

//         i ++;
//     }
//     return 0;
// }

// int atoi(char *str)
// {
//     int i;
//     int sign;

//     sign = 1;
//     i = 0;
//     while(str[i] != '\0')
//     {
//         if (str[i] == '-')
//             sign = sign * -1;
//         else if (str[i] >= '0' && str[i] <= '9')
//             if (sign == -1)
//                 write(1, "-", 1);
//             ft_putnbr(&str[i]);
//             break;
//         i ++;
//     }
//     return 0;
// }
