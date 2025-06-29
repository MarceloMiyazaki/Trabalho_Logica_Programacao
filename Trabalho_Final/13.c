#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//FUNÇÃO REMOVER CHAR
char * remove_char(char *str, char carac){
    int len = strlen(str), index = 0;
    char resultado[1000];

    for(int i=0; i < len; i++){
        if(str[i]!=carac){
            resultado[index] = str[i];
            index++;
        }}

    resultado[index] = '\0';
    strcpy(str, resultado);
    return str;
}

//FUNÇÃO PRINCIPAL
int main(){
    char string[10000], caractere;

    printf("Digite uma string: ");
    scanf("%s", string);

    printf("Digite um caractere: ");
    scanf(" %c", &caractere);

    //CHAMANDO A FUNÇÃO REMOVE_CHAR
    printf("\nA string sem o caractere '%c' fica %s\n", caractere, remove_char(string, caractere));

    return 0;
}
