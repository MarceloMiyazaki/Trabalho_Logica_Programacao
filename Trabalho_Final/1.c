#include <stdio.h>
#include <stdlib.h>

//FUNÇÃO PARA OBTER O MAIOR VALOR
int max(int *vet,int len)
{
    for(int i=0; i <len; i++){
        if(vet[0] < vet[i])
            vet[0] = vet[i];
    }//loop for

    return vet[0];
}

//FUNÇÃO PRINCIPAL
int main()
{
    int vetor[100], length, i;

    printf("Informe o tamanho do vetor: ");
    scanf("%d", &length);

    //LOOP FOR PARA ARMAZENAR VALORES DO VETOR
    for(i=0;i<length;i++){
        printf("Valor %d: ", i+1);
        scanf("%d", &vetor[i]);
    }

    //PRINT CHAMANDO FUNÇÃO MAX
    printf("\nMaior Elemento: %d\n", max(vetor, length));
    return 0;
}
