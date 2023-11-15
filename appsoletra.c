#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <ctype.h>

int main() {
    setlocale(LC_ALL, "");

    char *palavra = malloc(sizeof (char));
    printf("Insira a palavra que você deseja soletrar: \n");
    scanf("%s", palavra);
    int tamanho = strlen(palavra);

    for(int i = 0; i < tamanho; i++){
        if(i < tamanho-1) {
            printf("%c - ", toupper(palavra[i]));
        }else{
            printf("%c", toupper(palavra[i]));
        }
    }
    free(palavra);
    return 0;
}
