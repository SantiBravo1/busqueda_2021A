#include <stdio.h>
#define N 10

int buscaValor(int arr[N], int n);

int main()
{
    int arreglo[N];
    int numero;
    int i;
    int posicion;

    for(i=0; i<N; i++)
    {
        printf("arreglo[%d]: ", i);
        scanf("%d", &arreglo[i]);
    }

    printf("Dame el numero a buscar: ");
    scanf("%d", &numero);

    posicion=buscaValor(arreglo, numero);

    if(posicion != -1)
        printf("Valor se encuentra en la posicion %d", posicion);
    else
        printf("El numero no existe dentro del arreglo");
    return 0;
}

int buscaValor(int arr[N], int n)
{
    int pos=-1;

    for(int i; i<N; i++)
    {
        printf("Buscando en la posicion %d\n", i);
        if(arr[i]==n)
            pos=i;
    }
    return pos;
}
