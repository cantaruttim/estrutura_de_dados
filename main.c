#include <stdio.h>
#include <malloc.h>
#define alturaMaxima 300

typedef struct
{
    int peso;   // peso em quilogramas
    int altura; // altura em centimetros
} PesoAltura;

int main()
{
    int x;
    // alocação de memória
    PesoAltura *pessoa1 = (PesoAltura *)malloc(sizeof(PesoAltura));
    pessoa1->peso = 80;
    pessoa1->altura = 185;

    printf("Peso: %i, Altura %i. ", pessoa1->peso, pessoa1->altura);
    if (pessoa1->altura > alturaMaxima)
    {
        printf("Altura acima da maxima.\n");
    }
    else
        printf("Altura abaixo da maxima.\n");

    // locais diferentes da memória
    printf("%p %p %p\n", &x, &pessoa1, &(pessoa1->altura));

    return 0;
}