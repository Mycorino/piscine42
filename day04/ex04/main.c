#include <stdio.h>

int main(void)
{
    printf("Expected 120 : %d\n", ft_fibonacci(5));
    printf("Expected 1 : %d\n", ft_fibonacci(1));
    printf("Expected 0 : %d\n", ft_fibonacci(13));
    printf("Expected 1 : %d\n", ft_fibonacci(0));
    printf("Expected 0 : %d\n", ft_fibonacci(-9));
    return(0);
}