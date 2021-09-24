#include <stdio.h>
#define N 10

int buscaValor(int num[N], int may);

int main()
{
	int numeros[N] ;
	int mayor;
	int i;
	int posicion;
    mayor=numeros[N];
	for(i=0; i<N; i++)
    {
        printf("numeros[%d]: ", i);
        scanf("%d", &numeros[i]);
    }

	posicion=buscaValor(numeros, mayor);

	printf("El mayor es %d en la posicion %d\n", mayor, posicion);
}
int buscaValor(int num[N], int may)
{
 may=num[N];
 int pos=-1;
 for (int i = 1; i < sizeof(num) / sizeof(num[N]); ++i)
	{
		if (num[i] < may) may = num[i];
		pos=i;
	}
	return pos;
}
