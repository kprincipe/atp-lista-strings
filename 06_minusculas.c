// Crie uma função que transforma todos os caracteres de uma string em minusculos.

#include <stdio.h>
#include <string.h>

void ler_string(char *s) {
    printf("Digite algo : ");
    fgets(s, 256, stdin);
}

int main(void) {
    // declaracao de variaveis
    char str[256];

    // entrada de dados
    ler_string(str);

    // processamento
    for (int i = 0; i < strlen(str); ++i) {
        if (str[i] >= 65 && str[i] <= 90) {
            str[i] = str[i] + 32;
        }
    }

    // saida processada
    printf("Resultado   : %s\n", str);
}
