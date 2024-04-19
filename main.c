/******************************************************************************

 Sheldon estava em sua casa, sentado no seu lugar no sofá. 
 Neste momento, entram em sua sala Penny, Leonard, Rajesh, Howard, Prya e Amy. 
 Sheldon, então, teve uma brilhante ideia: jogar “Pedra, papel, tesoura, lagarto, Spock”. 
 Sheldon explica, claramente, as regras do jogo: 
 “É muito simples. Olhe: tesoura corta papel, papel cobre pedra, pedra esmaga lagarto, 
 lagarto envenena Spock, Spock quebra tesoura, tesoura decapita lagarto, lagarto come papel, 
 papel desaprova Spock, Spock vaporiza pedra e como sempre, pedra destrói tesoura”.

O que você deve fazer é criar um programa que permita a Sheldon e seus amigos jogarem 
“Pedra, papel, tesoura, lagarto, Spock”. Inicialmente, peça para o primeiro jogador digitar sua jogada. 
As jogadas devem ser lidas como caracteres, sendo:
R para “pedra”
P para “papel”
T para “tesoura”
L para “lagarto”
S para “spock”
Depois, peça para o segundo jogador digitar sua jogada (também do tipo char). 
Ao final, imprima o nome do jogador vencedor,
ou uma mensagem de erro caso algum dos dois não tenha digitado uma das jogadas possíveis ('R', 'P', 'T', 'L' ou 'S'). 


*******************************************************************************/
include <stdio.h>


int main() {
    char jogador1, jogador2;

    printf("Sheldon, digite sua jogada (R para pedra, P para papel, T para tesoura, L para lagarto, S para Spock): ");
    scanf(" %c", &jogador1);

    printf("Segundo jogador, digite sua jogada (R para pedra, P para papel, T para tesoura, L para lagarto, S para Spock): ");
    scanf(" %c", &jogador2);

    if ((jogador1 == 'R' && (jogador2 == 'L' || jogador2 == 'S')) ||
        (jogador1 == 'P' && (jogador2 == 'R' || jogador2 == 'S')) ||
        (jogador1 == 'T' && (jogador2 == 'P' || jogador2 == 'L')) ||
        (jogador1 == 'L' && (jogador2 == 'P' || jogador2 == 'S')) ||
        (jogador1 == 'S' && (jogador2 == 'R' || jogador2 == 'T'))) {
        printf("Sheldon venceu!\n");
    } else if (jogador1 == jogador2) {
        printf("Empate!\n");
    } else if ((jogador2 == 'R' && (jogador1 == 'L' || jogador1 == 'S')) ||
               (jogador2 == 'P' && (jogador1 == 'R' || jogador1 == 'S')) ||
               (jogador2 == 'T' && (jogador1 == 'P' || jogador1 == 'L')) ||
               (jogador2 == 'L' && (jogador1 == 'P' || jogador1 == 'S')) ||
               (jogador2 == 'S' && (jogador1 == 'R' || jogador1 == 'T'))) {
        printf("Segundo jogador venceu!\n");
    } else {
        printf("Erro: Uma ou mais jogadas são inválidas.\n");
    }


    return 0;
}
