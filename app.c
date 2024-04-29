#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

//Jogo da advinhação

int main(void)
{
    setlocale(LC_ALL, "Portuguese_Brazil");

    int numero_secreto;
    int palpite;
    int tentativas = 0;

    printf(">>JOGO DA ADVINHAÇÃO<< \n\n");
    printf("Para acertar, você precisa informar um número entre 0 a 100. \n");

    printf("Vamos avaliar em quantas tentativas você acerta.\n\n");
    srand(time(0)); // Inicializando o rand. Sem ele o Rand
    numero_secreto = rand() % 100 + 1;

    do
    {
        printf("Vamos lá! Chute um número: ");
        scanf("%d", &palpite);
        tentativas++;

        if (palpite > numero_secreto)
        {
            printf("Seu chute está alto. Tente novamente.\n\n ");
        }
        else if (palpite < numero_secreto)
        {
            printf("Seu chute está baixo. Tente novamente.\n\n");
        }
        else
        {
            printf("Parabéns! Você chutou certo agora em %d tentativas", tentativas);
        }

    } while (palpite != numero_secreto);

    printf("\n Pressione y/n para sair...");
    int y, n;
    scanf("%d / %d", y, n );
    getchar();
    
    return 0;
}
