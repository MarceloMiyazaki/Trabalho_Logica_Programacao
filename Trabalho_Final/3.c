#include <stdio.h>
#include <stdlib.h>

//FUNÇÃO PARA REALIZAR A SOMA
int soma(int *vet, int len){
    int i, total = 0;

    for(i=0;i<len;i++)
        total += vet[i];

    return total;

}

//FUNÇÃO PRINCIPAL
int main()
{
    int vetor[100], length, i;

    printf("Informe o tamanho do vetor: ");
    scanf("%d", &length);

    //LOOP FOR PARA ARMAZENAR OS VALORES DO VETOR
    for(i=0;i<length;i++){
        printf("Valor %d: ", i+1);
        scanf("%d", &vetor[i]);
    }

    //PRINT CHAMANDO A FUNCAO SOMA
    printf("Somatoria: %d", soma(vetor, length));
    return 0;
}
