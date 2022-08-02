//Calcular si un numero es unidad-decenas-centenas.... etc
#include<stdio.h>
#include<math.h>
int main(){

	int n1;

	printf("Introduce el numero:");
	scanf("%d",&n1);

	int i=10,j=100,a=10,flag=0;
	int Modulo;
	do{

		if(n1>=0 && n1<=9){
			Modulo=a;
			printf("%d",n1);
			flag=1;
		}
		if(n1>=i && n1<=j-1){
			Modulo=a;
			flag=1;
		}
		else{
			a*=10;
			i*=10;
			j*=10;
		}

	}while(flag==0);

	//printf("\n%d",Modulo);
	printf("\nCalculando los numeros separados:");

	int Mdiv=n1,Mdiv2;

	do{
		Mdiv=Mdiv/Modulo;
		Mdiv2=n1%Modulo;

		printf("%d ",Mdiv);
		Mdiv=Mdiv2;
		Modulo=Modulo/10;
	}while(Modulo>0);

	return 0;
}
