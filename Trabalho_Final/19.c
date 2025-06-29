#include <stdio.h>
#include <stdlib.h>

int main(){
    //QUANTIDADE VENDIDA POR SABOR
    int quantidade[50], quant_pedido=1, cliente = 1;

    //VALOR DE CADA SABOR
    double valor[50], valor_total = 0;

    //ARMAZENAR VALOR DE CADA SABOR
    for(int i=0; i < 27; i++){
        printf("Valor do sabor %d: ", i+1);
        scanf("%lf", &valor[i]);
    }

    //CRIAR CONTAGEM DA QUANTIDADE VENDIDA
    for(int i=0; i < 27; i++)
        quantidade[i] = 0;


    //WHILE TRUE PARA ANOTAR PEDIDOS
    while(quant_pedido!=0){
        int pizza_pedido;
        double valor_pedido = 0;

        printf("\n===CLIENTE %d===\nQuantas pizzas: ", cliente);
        scanf("%d", &quant_pedido);

        if(!quant_pedido)
            break;

        for(int i=0; i < quant_pedido; i++){
            printf("Sabor pizza %d: ", i+1);
            scanf("%d", &pizza_pedido);
            valor_pedido += valor[pizza_pedido-1];
            valor_total += valor[pizza_pedido-1];
            quantidade[pizza_pedido-1] += 1;
        }

        printf("\nTotal a pagar: %.2lf\n", valor_pedido);
        cliente++;
    }//FIM PEDIDOS

    //IMPRESSOES FINAIS
    printf("\n\n=====================\n\n");
    printf("VALOR TOTAL FATURADO: %.2lf", valor_total);
    printf("\nTOTAL DE VENDAS POR SABOR\n");
    for(int i=0; i < 27; i++)
        printf("Sabor %d: %d\n", i+1, quantidade[i]);



    return 0;
}
