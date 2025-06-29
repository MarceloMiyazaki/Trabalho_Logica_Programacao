#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//FUN��O CONCATENA��O INVERTIDA
char *concatenacao(char *stra, char *strb, int k){
    int lena = strlen(stra), lenb = strlen(strb);


    //LEN STRB MENOR QUE K
    if(lenb<k){
        for(int i=lenb-1; i >= 0; i--){
            stra[lena] = strb[i];
            lena++;
        }}

    //LEN STRB MAIOR QUE K
    else{
        for(int i=k-1; i >= 0; i--){
            stra[lena] = strb[i];
                lena++;
        }}

    stra[lena] = '\0';
    return stra;
}

//FUN��O PRINCIPAL
int main(){
    char stringa[1000], stringb[1000];
    int x;

    printf("Digite a strA: ");
    scanf("%s", stringa);

    printf("Digite a strB: ");
    scanf("%s", stringb);

    printf("Digite o K: ");
    scanf("%d", &x);

    printf("\nResultado final: %s\n", concatenacao(stringa, stringb, x));

    return 0;
}
