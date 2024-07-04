#include <stdio.h>
#include <string.h>

int main(int argc, char* argv[]) {
    // Verifica se o número de argumentos é suficiente
    if (argc != 3) {
        fprintf(stderr, "Uso: %s <string1> <string2>\n", argv[0]);
        return 1;
    }

    // Obtém as strings dos argumentos
    char* str1 = argv[1];
    char* str2 = argv[2];

    // Verifica se str2 é uma substring de str1
    if (strstr(str1, str2) != NULL) {
        return 0; // sucesso
    } else {
        return 1; // erro
    }
}