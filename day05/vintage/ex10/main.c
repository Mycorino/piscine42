#include <stdio.h>

int main(void)
{
	char str[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
    printf("Salut, Comment Tu Vas ? 42mots Quarante-Deux; Cinquante+Et+Un : %s\n", ft_strcapitalize(str));
    return(0);
}
