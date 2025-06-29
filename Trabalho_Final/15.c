#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//FUN플O ELEI플O
void eleicao(int alunos){
    char candidato[100];
    int ana=0, ari=0, eva=0, ivan=0, nulo=0;

    printf("Insira o nome do candidato votado pelo respectivo aluno.\n");
    for(int i=0;i<alunos;i++){
        printf("Aluno %d: ", i+1);
        scanf("%s", candidato);

        if(!strcmp(candidato, "Ana"))
            ana++;

        else if(!strcmp(candidato, "Ari"))
            ari++;

        else if(!strcmp(candidato, "Eva"))
            eva++;

        else if(!strcmp(candidato, "Ivan"))
            ivan++;

        else
            nulo++;
        }

    printf("\n===VOTOS===\nAna: %d\nAri: %d\nEva: %d\nIvan: %d\nNulo: %d\n", ana,ari,eva,ivan,nulo);
}

//FUN플O PRINCIPAL
int main(){
    int alunos_presentes;

    printf("Quantos alunos presentes: ");
    scanf("%d", &alunos_presentes);

    //CHAMANDO A FUN플O ELEI플O
    eleicao(alunos_presentes);

    return 0;
}
