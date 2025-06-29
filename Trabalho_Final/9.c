#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//FUNÇÃO ÚLTIMA APARIÇÃO
int ult_ap(char *str, char carac){
    int len = strlen(str), pos = -1;

    for(int i=0; i < len; i++){
        if(str[i]==carac)
            pos = i;
    }

    return pos;
}

//FUNÇÃO PRINCIPAL
int main(){
    char string[1000], caractere;

    printf("Digite uma string: ");
    scanf("%s", string);

    printf("Digite um caractere: ");
    scanf(" %c", &caractere);

    //CHAMANDO A FUNÇÃO ULT_AP
    if(ult_ap(string, caractere)==-1)
        printf("\nO caractere nao aparece na string.\n");

    else
        printf("\nA ultima aparicao do caractere '%c' e na posicao %d\n", caractere, ult_ap(string, caractere));

    return 0;
}
