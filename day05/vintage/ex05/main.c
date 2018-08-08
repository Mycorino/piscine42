#include <stdio.h>

int main(void)
{
	char str[] = "abcdgehfhHELLO";
    printf("Expected 0 : %i\n", *ft_strstr(str, "LO"));
    return(0);
}

#include <stdio.h>