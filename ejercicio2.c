#include <stdio.h>
#define N 10

int buscaValor(int num[N], int menos);

int main()
{
	int numeros[N] ;
	int menor;
	int i;
	int posicion;
    menor=numeros[N];
	for(i=0; i<N; i++)
    {
        printf("numeros[%d]: ", i);
        scanf("%d", &numeros[i]);
    }

	posicion=buscaValor(numeros, menor);

	printf("El menor es %d en la posicion %d\n", menor, posicion);
}
int buscaValor(int num[N], int menos)
{
 menos=num[N];
 int pos=-1;
 for (int i = 1; i < sizeof(num) / sizeof(num[N]); ++i)
	{
		if (num[i] < menos) menos = num[i];
		pos=i;
	}
	return pos;
}