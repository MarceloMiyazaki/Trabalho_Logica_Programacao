#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//CONTAR CARACTERES
int *count_char(char *string, int *vetor){
    int len = strlen(string);

    for(int i=0; i<len; i++)
        vetor[(unsigned char)string[i]]++;

    return vetor;
}

//5 MAIS FREQUENTES
int *max_freq(int *vetor, int *cinco){
    int index_max, freq_max=0;

    for(int i=0; i<5;i++){
        for(int j=0; j<128;j++){
            if(vetor[j]>freq_max){
                freq_max = vetor[j];
                index_max = j;
            }}
        if(freq_max==0)
            break;
        else{
            cinco[i] = index_max;
            vetor[index_max] = 0;
            freq_max = 0;
        }}

    return cinco;
}


//FUNÇÃO PRINCIPAL
int main(){
    char texto[1000] = {"AAA C~~"};
    int contagem[128] = {0}, cinco_max[5] ={0}, len_cinco;

    count_char(texto, contagem);

    for(int i=0;i<128;i++)
        if(contagem[i]>0)
            printf("Caractere (ASCII %d) aparece: %d\n", i, contagem[i]);

    max_freq(contagem, cinco_max);

    printf("\n\nOs caracteres mais frequentes sao:\n");

    for(int i=0; i<5;i++){
        if(cinco_max[i])
            printf("'%c' ou ASCII %d\n", cinco_max[i], cinco_max[i]);
    }

    return 0;
}
