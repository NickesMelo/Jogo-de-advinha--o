#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

//Jogo da advinha��o

int main(void)
{
    setlocale(LC_ALL, "Portuguese_Brazil");

    int numero_secreto;
    int palpite;
    int tentativas = 0;

    printf(">>JOGO DA ADVINHA��O<< \n\n");
    printf("Para acertar, voc� precisa informar um n�mero entre 0 a 100. \n");

    printf("Vamos avaliar em quantas tentativas voc� acerta.\n\n");
    srand(time(0)); // Inicializando o rand. Sem ele o Rand
    numero_secreto = rand() % 100 + 1;

    do
    {
        printf("Vamos l�! Chute um n�mero: ");
        scanf("%d", &palpite);
        tentativas++;

        if (palpite > numero_secreto)
        {
            printf("Seu chute est� alto. Tente novamente.\n\n ");
        }
        else if (palpite < numero_secreto)
        {
            printf("Seu chute est� baixo. Tente novamente.\n\n");
        }
        else
        {
            printf("Parab�ns! Voc� chutou certo agora em %d tentativas", tentativas);
        }

    } while (palpite != numero_secreto);

    printf("\n Pressione y/n para sair...");
    int y, n;
    scanf("%d / %d", y, n );
    getchar();
    
    return 0;
}
