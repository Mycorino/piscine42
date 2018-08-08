
#include <stdio.h>

int main(void)
{
    printf("Expected 120 : %d\n", ft_recursive_factorial(5));
    printf("Expected 1 : %d\n", ft_recursive_factorial(1));
    printf("Expected 0 : %d\n", ft_recursive_factorial(13));
    printf("Expected 1 : %d\n", ft_recursive_factorial(0));
    printf("Expected 0 : %d\n", ft_recursive_factorial(-9));
    return(0);
}