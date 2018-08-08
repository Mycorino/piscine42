

#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    printf("Ft atoi : %d, vrai atoi : %d \n", atoi("45978776aaaa"), ft_atoi("45978776aaaa"));
    printf("Ft atoi : %d, vrai atoi : %d \n", atoi(" \\n \\v  -45978776abc"), ft_atoi(" \\n \\v  -45978776abc"));
    printf("Ft atoi : %d, vrai atoi : %d \n", atoi("       45978776"), ft_atoi("       45978776"));
    printf("Ft atoi : %d, vrai atoi : %d \n", atoi("-45978776"), ft_atoi("-45978776"));
    printf("Ft atoi : %d, vrai atoi : %d \n", atoi("abc45978776"), ft_atoi("abc45978776"));
    return(0);
}
