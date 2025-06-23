#include <stdio.h>

//essa parte é utilizada para ordenar cada vetor em ordem crescente
void OrdenarVetor(int VETOR[], int TAMANHO) {
    for (int i = 0; i < TAMANHO - 1; i++) {
        for (int j = 0; j < TAMANHO - i - 1; j++) {
            if (VETOR[j] > VETOR[j + 1]) {
                int temp = VETOR[j];
                VETOR[j] = VETOR[j + 1];
                VETOR[j + 1] = temp;
            }
        }
    }
}

int main() {
    int TAMANHO;

   //Aqui é onde vai ser selecionado o tamanho dos vetores
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &TAMANHO);


    if (TAMANHO <= 0) {
        printf("Tamanho invalido!\n");
        return 1;
    }//caso o valor seja inválido ele encerra a função

    int VETOR[TAMANHO];

    for (int i = 0; i < TAMANHO; i++) {
        printf("Digite o elemento %d: ", i + 1);
        scanf("%d", &VETOR[i]);
    }

   //mostra o vetor original
    printf("\nVetor original: ");
    for (int i = 0; i < TAMANHO; i++) {
        printf("%d ", VETOR[i]);
    }

    // Ordena o vetor
    OrdenarVetor(VETOR, TAMANHO);

    // Mostra o vetor ordenado
    printf("\nVetor ordenado: ");
    for (int i = 0; i < TAMANHO; i++) {
        printf("%d ", VETOR[i]);
    }

    printf("\n");
    return 0;
}
//encerra o programa com sucesso
