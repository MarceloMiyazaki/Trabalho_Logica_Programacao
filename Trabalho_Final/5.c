#include <stdio.h>
#include <stdlib.h>

//FUNÇÃO PARA CALCULAR A MÉDIA
double media(double *vet, int len){
    int i;
    double total = 0;

    for(i=0;i<len;i++)
        total += vet[i];

    return total/len;

}

//FUNÇÃO PRINCIPAL
int main()
{
    int length, i;
    double vetor[1000];

    printf("Informe o tamanho do vetor: ");
    scanf("%d", &length);

    //LOOP FOR PARA ARMAZENAR OS VALORES DO VETOR
    for(i=0;i<length;i++){
        printf("Valor %d: ", i+1);
        scanf("%lf", &vetor[i]);
    }

    //PRINT PARA CHAMAR A FUNÇÃO MEDIA
    if(length!=0)
        printf("Media: %.2lf", media(vetor, length));

    return 0;
}
