#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int main()
{
    printf("%s\n%s%s\n%s%s\n\n","De a cuerdo con isdigit:",
           isdigit('8') ? "8 es un " : "8 no es un", "digito",
           isdigit('#') ? "# es un " : "# no es un", "digito");
           printf("\n");
           isdigit('2') ? printf("2 es un digito") : printf("No es un digito");
           printf("\n");
           isdigit('22') ? printf("Es un digito") : printf("22 no es un digito");
           printf("\n\n");

    printf("%s\n%s%s\n%s%s\n%s%s\n%s%s\n\n",
           "De acuerdo con isalpha:",
           isalpha('A')? "A es una " : "A no es una", "letra",
           isalpha('b')? "b es una " : "b no es una", "letra",
           isalpha('&')? "& es una " : "& no es una", "letra",
           isalpha('4')? "4 es una " : "4 no es una", "letra" );
    printf("\n\n");

    printf("%s\n%s%s\n%s%s\n%s%s\n\n",
           "De acuerdo con isalnum:",
           isalnum('A') ? "A es un " : "no es un ", "digito o una letra",
           isalnum('8') ? "8 es un " : "no es un ", "digito o una letra",
           isalnum('#') ? "# es un " : "# no es un ", "digito o una letra"
           );
    printf("\n\n");

    printf("%s\n%s%s\n%s%s\n%s%s\n%s%s\n%s%s\n",
           "De acuerdo con isxdigit",
           isxdigit('F') ? "F es un " : "F no es un ", "digito hexadecimal",
           isxdigit('J') ? "J es un " : "J no es un ", "digito hexadecimal",
           isxdigit('7') ? "7 es un " : "7 no es un ", "digito hexadecimal",
           isxdigit('$') ? "$ es un " : "$ no es un ", "digito hexadecimal",
           isxdigit('f') ? "f es un " : "f no es un ", "digito hexadecimal"
           );

    return 0;
}
