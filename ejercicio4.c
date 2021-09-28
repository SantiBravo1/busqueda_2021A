#include <stdio.h>

#define R 3
#define C 5

int buscaValor(int num[r][c], int menos);

int main()
{
	int numeros[R][C];
	int menor;
	int i, j;
	int posicion;
    menor=numeros[R][C];
	for(i=0; i<R; i++)
    {
        for(j=0; j<C; j++)
        {
            printf("matriz[%d][%d]", i, j);
            scanf("%d", &numeros[i][j]);
        }
    }
    posicion=buscaValor(numeros, menor);
     printf("Arreglo de menores[%d] ", menor);

}
int buscaValor(int num[r][c], int menos)
{
 menos=num[r][c];
 int pos=-1;
 for (int i = 1; i < sizeof(num) / sizeof(num[N]); ++i)
	{
		if (num[i] < menos) menos = num[i];
		pos=i;
	}
	return pos;
}
