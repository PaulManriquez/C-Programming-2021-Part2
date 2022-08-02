#include <stdio.h>
#include <stdlib.h>

void inverso(const char * const ptrs);

int main()
{
    char enunciado[80];
    printf("Introduce el enunciado:");
    gets(enunciado);

    printf("\nLa linea impresa al reves es:\n");
    inverso(enunciado);

    return 0;
}
void inverso(const char *const ptrs)
{
    if(ptrs[0]=='\0'){
        return;
    }
    else{
        inverso(&ptrs[1]);
        putchar(ptrs[0]);//Utiliza putchar para despleglar los caracteres
    }

}
