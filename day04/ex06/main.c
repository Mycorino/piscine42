#include <stdio.h>

int main(void)
{
    printf("Expected 120 : %d\n", ft_sqrt(5));
    printf("Expected 1 : %d\n", ft_sqrt(1));
    printf("Expected 0 : %d\n", ft_sqrt(13));
    printf("Expected 1 : %d\n", ft_sqrt(0));
    printf("Expected 0 : %d\n", ft_sqrt(-9));
    return(0);
}