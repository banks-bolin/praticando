#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <ctype.h>

int main() {
    setlocale(LC_ALL, "");

    char palavra[50];
    printf("Insira a palavra que você deseja soletrar: \n");
    scanf("%s", &palavra);
    int tamanho = strlen(palavra);

    for(int i = 0; i <= tamanho; i++){
        printf("%c\n", toupper(palavra[i]));
    }
    return 0;
}
