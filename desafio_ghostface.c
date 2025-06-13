#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int numeroAleatorio;
    int palpite;
    int tentativas;
    char jogarNovamente;
    
    srand(time(NULL)); // para o número não ser sempre o mesmo em cada execução

    printf("=============================================\n");
    printf("           DESAFIO DE GHOSTFACE\n");
    printf("=============================================\n");
    printf("\nUma voz desconhecida diz pelo telefone: \"Ola, Sidney... Quer jogar um jogo?\"\n");
    printf("\nGhostface te desafia a adivinhar um numero secreto.\n");
    printf("Acerte, e talvez voce viva... Erre, e suas chances diminuem.\n");
    printf("Pronto?\n\n");

    do {
        numeroAleatorio = (rand() % 50) + 1; // para gerar um número aleatório entre 1 e 50
        palpite = 0; // para resetar o palpite
        tentativas = 0; // para resetar as tentativas

        printf("\n---------------------------------------------------------\n");
        printf("Ghostface: \"Estou pensando em um numero... entre 1 e 50.\"\n");
        printf("          \"Tente adivinhar...\"\n");
        printf("---------------------------------------------------------\n");

        do {
            printf("\n> Seu palpite, rapido!: ");
            scanf("%d", &palpite);
            tentativas++;

            if (palpite > numeroAleatorio) {
                printf("Ghostface: \"Muito alto! Voce nao vai escapar assim.\"\n");
            } else if (palpite < numeroAleatorio) {
                printf("Ghostface: \"Muito baixo! Parece que voce nao e tao esperto.\"\n");
            } else {
                printf("\nGhostface: \"IMPOSSIVEL! Voce adivinhou meu numero %d em %d tentativas!\"\n", numeroAleatorio, tentativas);
                printf("VOCE SOBREVIVEU A ESSA RODADA! POR POUCO!\n");
            }
        } while (palpite != numeroAleatorio);

        printf("\n---------------------------------------------------------\n");
        printf("Quer tentar a sorte de novo? (s/n): ");
        scanf(" %c", &jogarNovamente);

    } while (jogarNovamente == 's' || jogarNovamente == 'S');

    printf("\n---------------------------------------------------------\n");
    printf("         Ghostface: \"Ate a proxima ligacao...\"\n");
    printf("          FIM DO JOGO. Cuidado ao atender o telefone.\n");
    printf("---------------------------------------------------------\n");

    return 0;
}