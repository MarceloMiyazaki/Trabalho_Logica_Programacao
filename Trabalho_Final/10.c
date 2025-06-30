#include <stdio.h>
#include <string.h>

int espacos(char* string){
    int tamanho = 0;
    int espacos = 0;
    while (string[tamanho]){
        if (string[tamanho] == ' '){
            espacos++;
        }
        tamanho++;
    }
    return(espacos);
}


int main(){
    char input[256];
    if (fgets(input, sizeof(input), stdin) != NULL) {
        printf("%d", espacos(input));
    }
    return 0;
}
