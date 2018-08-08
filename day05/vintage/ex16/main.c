#include <stdio.h>
int main(void)
{
	char src[] = "Source";
	char dest[100] = "Destination";
    printf("%s\n", ft_strcat(dest, src));
    return(0);
}
