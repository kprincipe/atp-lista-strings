// Crie uma função que recebe uma string e um caractere, e retorne o número de vezes que esse caractere aparece na string.

#include <stdio.h>
#include <string.h>

#define TAM 256

// le uma string do usuario e armazena em uma variavel
void ler_string(char *s) {
    printf("Digite algo: ");
    fgets(s, TAM, stdin);
}

// itera cada caractere de uma string e
// compara com letra para retornar a quantidade de repeticoes
int contar_letra(char *s, char letra) {
    int c = 0;
    for (int i = 0; i < strlen(s); ++i) {
        if (s[i] == letra) c++;
    }
    return c;
}

int main(void) {
    // declaracao de variaveis
    char str[TAM];
    int repeticoes = 0;

    // entrada de dados
    ler_string(str);

    printf("Digite uma letra: ");
    char letra = getchar();

    // processamento
    repeticoes = contar_letra(str, letra);;

    // saida
    printf("\nLetra \"%c\" foi repetida %d vezes!!\n", letra, repeticoes);
}
