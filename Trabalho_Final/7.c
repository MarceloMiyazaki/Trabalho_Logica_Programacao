#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//FUNÇÃO PARA SABER REPETIDAS
int char_reps(char *str,char carac){
    int len = strlen(str), total = 0;

    for(int i=0; i <len; i++){
        if(str[i]==carac)
            total++;
    }

    return total;
}

//FUNÇÃO PRINCIPAL
int main(){
    char string[1000], caractere;

    printf("Digite uma string: ");
    scanf("%s", string);

    printf("Digite um caractere: ");
    scanf(" %c", &caractere);

    printf("\nO caractere '%c' aparece %d vezes.\n", caractere, char_reps(string, caractere));

    return 0;
}
