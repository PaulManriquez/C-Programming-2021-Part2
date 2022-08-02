#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <conio.h>

void DetSiEsDigito(char letra);
void DetSiEsLetra(char letra);
void DetSiEsNumODig(char letra);
void DetSiHexadecimal(char letra);
void LetraMinuscula(char letra);
void LetraMayuscula(char letra);
void IfLetraMayuscula_Minuscula(char letra);
void IfLetraMinuscula_Mayuscula(char letra);
int main()
{
    char letra;
    const char *s1="si";
    char respuesta[3],c;
    int opcion,i=0;
    int resp;
        do{
            system("cls");
            printf("Selecciona una de las siguientes acciones a realizar:\n\n");
            printf("Devuelve 1 si char es un digito else devuelve 0 (1):\n");
            printf("Devuelve 1 si char es una letra else devuelve 0 (2):\n");
            printf("Devuelve 1-2 si es char , digito \"4\" else devuelve 0 (3):\n");
            printf("Devuelve 1 si es digito Hexadecimal else devuelve 0 (4):\n");
            printf("Devuelve 1 si es una letra minuscula (5):\n");
            printf("Devuelve 1 si es una letra mayuscula (6):\n");
            printf("Devuelve a minuscula si entra una mayuscula (7):\n");
            printf("Devuelve a mayuscula si entra una letra minuscula(8)\n");
            printf("Opcion deseada:");
            scanf("%d",&opcion);
            switch(opcion)
            {
            case 1:
                    fflush(stdin);
                    printf("\nInserte una letra o un numero:");
                    scanf("%c",&letra);//scanf(" %c",&letra); with out
                    fflush(stdin);
                    DetSiEsDigito(letra);
                    break;
            case 2:
                    fflush(stdin);
                    printf("\nInserte una letra o un numero:");
                    scanf("%c",&letra);//scanf(" %c",&letra); with out
                    fflush(stdin);
                    DetSiEsLetra(letra);
                    break;
            case 3:
                    fflush(stdin);
                    printf("\nInserte una letra o un numero:");
                    scanf("%c",&letra);//scanf(" %c",&letra); with out
                    fflush(stdin);
                    DetSiEsNumODig(letra);
                    break;
            case 4:
                    fflush(stdin);
                    printf("\nInserte digito o letra hexadecimal:");
                    scanf("%c",&letra);//scanf(" %c",&letra); with out
                    fflush(stdin);
                    DetSiHexadecimal(letra);
                    break;
            case 5:
                    fflush(stdin);
                    printf("\nInserte letra minuscula:");
                    scanf("%c",&letra);//scanf(" %c",&letra); with out
                    fflush(stdin);
                    LetraMinuscula(letra);
                    break;
            case 6:
                    fflush(stdin);
                    printf("\nInserte letra mayuscula:");
                    scanf("%c",&letra);//scanf(" %c",&letra); with out
                    fflush(stdin);
                    LetraMayuscula(letra);
                    break;
            case 7:
                    fflush(stdin);
                    printf("\nInserte letra mayuscula:");
                    scanf("%c",&letra);//scanf(" %c",&letra); with out
                    fflush(stdin);
                    IfLetraMayuscula_Minuscula(letra);
                    break;
            case 8:
                    fflush(stdin);
                    printf("\nInserte letra minuscula:");
                    scanf("%c",&letra);//scanf(" %c",&letra); with out
                    fflush(stdin);
                    IfLetraMinuscula_Mayuscula(letra);
                    break;
            default:
                    printf("Opcion no existente:");
                    break;
            }
            fflush(stdin);
            puts("\n\nDesea seguir imprimiendo? escriba si o no:");
            while ( (c=getchar())!='\n')
                {
                    respuesta[i++]=c;
                }
                respuesta[i]='\0';
            resp=strcmp(respuesta,s1);
        }while(resp==0);

    return 0;
}
void DetSiEsDigito(char letra)
{
    if (isdigit(letra)==1){
        printf("Es un numero");
        }
        else{
        printf("Es una letra");
        }
    printf("\nEste es con el if de \"?\" ");
    isdigit(letra)?printf("\nEs un numero"):printf("\nEs una letra");
    printf("\n");
    printf("Presione enter para seguir:");
    getch();
}
void DetSiEsLetra(char letra)
{
        //Result when uppercase alphabet is passed:1
        //Result when lowercase alphabet is passed:2
    if ( isalpha(letra)== 1 || isalpha(letra)== 2 ){
        printf("Es una letra");
        }
        else{
        printf("Es un numero");
        }
    printf("\n");
    printf("Presione enter para seguir:");
    getch();
}
void DetSiEsNumODig(char letra)
{
    //Investigar cual es el valor logico cuando es un numero ¿Que devuelve?
    int valor;
    valor = isalnum(letra);
    printf("El valor logico de un entero en Isalnum es:%d\n",valor);
    if ( isalnum(letra) >=1 /*== 1 || isalnum(letra)==2*/ ){
        printf("Es una letra o un numero ");
        }
        else{
        printf("No es letra ni numero");
        }
    printf("\n");
    printf("Presione enter para seguir:");
    getch();
}
void DetSiHexadecimal(char letra)
{
        //Devuelve un numero diferente de 0 cuando es verdadero si es numero hexadecimal
    if ( isxdigit(letra) !=0  ){
        printf("Es una letra o un numero hexadecimal ");
        }
        else{
        printf("No es letra ni numero hexadecimal");
        }
    printf("\n");
    printf("Presione enter para seguir:");
    getch();

}
void LetraMinuscula(char letra)
{
    int result;
    result=islower(letra);
    printf("Islwer devuelve:%d\n",result);
    if ( islower(letra) ==2  ){
        printf("Es una letra minuscula");
        }
        else{
        printf("No es una letra minuscula");
        }
    printf("\n");
    printf("Presione enter para seguir:");
    getch();


}
void LetraMayuscula(char letra)
{
    int result;
    result=isupper(letra);
    printf("Isuper devuelve:%d\n",result);
    if ( isupper(letra) ==1  ){
        printf("Es una letra mayuscula");
        }
        else{
        printf("No es una letra mayuscula");
        }
    printf("\n");
    printf("Presione enter para seguir:");
    getch();
}
void IfLetraMayuscula_Minuscula(char letra)
{
    char letraconvert;
    letraconvert = tolower(letra);
    printf("Letra mayuscula a minuscula es:%c",letraconvert);
    printf("\n");
    printf("Presione enter para seguir:");
    getch();
}
void IfLetraMinuscula_Mayuscula(char letra)
{
    char letraconvert;
    letraconvert = toupper(letra);
    printf("Letra minuscula a mayuscula es:%c",letraconvert);
    printf("\n");
    printf("Presione enter para seguir:");
    getch();

}
