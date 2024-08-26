#include <unistd.h>
#include <stdio.h>

int ft_strlen(char *str)
{
    int i;
    
    i = 0;
    while(str[i] != '\0')
        i++;
    return (i);
}

int base_validation(char *str)
{
    int i;
    int j;

    i = 0;
    while(str[i] != '\0')
    {
        if (str[i] == '+' || str[i] == '-')
            return (1);
        j = i + 1;
        while(str[j] != '\0')
        {
            if (str[i] == str[j])
                return (1);
            j ++;
        }
        i ++;        
    }
    return (0);
}

void    base_conversion(int nbr, char *base)
{
    int base_size;
	int new_nbr;

	base_size = ft_strlen(base);
	new_nbr = nbr / base_size;
	if (new_nbr != 0)
		base_conversion(new_nbr, base);
	write(1, &base[nbr % base_size], 1);
}

void    ft_putnbr_base(int nbr, char *base)
{
    // checks if base size is less than 1
    // checks if base contains '+' or '-'
    // checks if base contains duplicates
	if (ft_strlen(base) < 2 || base_validation(base) == 1)
		printf("ERROR: Base if faulty");
	
   	base_conversion(nbr, base);
}

int	main(void)
{
	char base[] = "0123456789abcdef";
	ft_putnbr_base(432, base);
	return (0);
}