#include <stdio.h>
#include <stdlib>

int main(){
	int Buff[5]={5,15,30,10,35};
	int *p;
	int i;
	p= Buff;

	printf("\nMostrar los elementos mediante notacion subindexado\n\n");
	for (i = 0; i < 5; i++)
	{
		printf("Valor del elemento %d_ %d\n", i,*(Buff + i));
	}
	printf("\nMostrar los elementos mediante puntero p\n\n");
	//i=0;
	for (i = 0; i < 5; i++)
	{
		printf("Valor del elemento %d_ %d\n",i, *p);
		p++;
	}

	printf("\nMostrar los elementos mediante arreglo p\n\n");

	for (i = 0; i < 5; i++)
	{
		printf("Valor del elemento %d_ %d\n", i,Buff[i]);
	}

	printf("\nMostrar la direccion de memoria de los elementos del arreglo\n\n");

	for (i = 0; i < 5; i++)
	{
		printf("Direccion de memoria del elemento %d_ %d\n", i,p);
		p++;
	}

	printf("\nMostrar el tamaño del arreglo y del puntero\n");
	printf("Tamaño del arreglo Buff: %d\n", sizeof(Buff));


	return 0;
}