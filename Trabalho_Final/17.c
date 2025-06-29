#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char ident[100];
    double artur=0, bruno=0, carlos=0, diego=0, todos=0, vlr_uni;
    int quant = 1;

    while(quant != 0){

        printf("Quantidade do produto: ");
        scanf("%d", &quant);

        printf("Valor unitario: ");
        scanf("%lf", &vlr_uni);

        printf("Para quem e o produto: ");
        scanf("%s", ident);

        printf("\n");

        if(!strcmp(ident, "Artur"))
            artur += vlr_uni * quant;

        else if(!strcmp(ident, "Bruno"))
            bruno += vlr_uni * quant;

        else if(!strcmp(ident, "Carlos"))
            carlos += vlr_uni * quant;

        else if(!strcmp(ident, "Diego"))
            diego += vlr_uni * quant;

        else
            todos += vlr_uni * quant;

    }

    todos = todos/4;
    artur += todos;
    bruno += todos;
    carlos += todos;
    diego += todos;

    printf("\n===Valor a Pagar===\nArtur: %.2lf\nBruno: %.2lf\nCarlos: %.2lf\nDiego: %.2lf\n", artur, bruno, carlos, diego);


    return 0;
}
