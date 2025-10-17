// Exibir na tela os caracteres da tabela de códigos ASCII.

#include <stdio.h>

int main(void) {
    // exibicao de cabecalho
    printf("Decimal ┊ Hexadecimal ┊ Caractere\n");

    // laco que itera os representantes numericos dos caracteres ascii
    for (int i = 36; i <= 126; ++i) {
        printf("─────────────────────────────────\n");
        printf("%d      ", i);

        // remove um espaco em numeros de dois digitos para alinhamento das colunas
        if (i > 99) printf("\b");
        printf("┊ 0x%.2x        ", i);
        printf("┊ %c\n", i);
    }
    return 0;
}
