// Crie uma função que transforma todos os caracteres de uma string em maiúsculos.

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
        if (str[i] >= 97 && str[i] <= 122) {
            str[i] = (int)str[i] - 32;
        }
    }

    // saida processada
    printf("Resultado   : %s\n", str);
}
