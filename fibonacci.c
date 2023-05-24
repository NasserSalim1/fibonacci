#include <stdio.h>

int fibonacci(int posicao) {
    if (posicao <= 0) {
        return -1;
    } else if (posicao == 1 || posicao == 2) {
        return 1;
    } else {
        int termo_anterior = 1;
        int termo_atual = 1;
        int proximo_termo;
        for (int i = 3; i <= posicao; i++) {
            proximo_termo = termo_anterior + termo_atual;
            termo_anterior = termo_atual;
            termo_atual = proximo_termo;
        }
        return termo_atual;
    }
}

int main() {
    int posicao;
    printf("Diite o valor da posição: ");
    scanf("%d", &posicao);
    int valor = fibonacci(posicao);
    printf("O valor correspondente à posição %d na sequência de Fibonacci é %d.\n", posicao, valor);
    return 0;
}