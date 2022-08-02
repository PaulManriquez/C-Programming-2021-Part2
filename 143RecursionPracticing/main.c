#include <stdio.h>
#include <stdlib.h>

void A(void);
void B(void);
void C(void);

int main()
{
    printf("Ejecutaremos A , consecuentemente ejecuta las demas\n");
    A();
    return 0;
}

void A(void)
{
    printf("Hello ");
    B();
}
void B(void)
{
    printf(" My");
    C();
}
void C(void)
{
    printf(" Friends");
}
