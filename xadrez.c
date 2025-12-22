/*O Objetivo aqui é imprimir a trajetória das peças
sem uma lógica profunda no código

Torre: 5 x Direita
Bispo: 5x Cima, Direita 
Rainha: 8x Esquerda
*/

#include <stdio.h>

int main(){

    int bispo=1, rainha=1;

    //Movimentação da Torre 5x Direita
    for(int i=1; i<=5; i++){
        printf("\nTorre -> Direita!");
    }
    
    printf("\n");
    //Movimentação do Bispo 5x Cima, Direita
    do{
        printf("\nBispo -> Cima, Direita!");
        bispo++;
    } while(bispo<=5);
    
    printf("\n");
    //Movimentação da Rainha 8x Esquerda
    while(rainha<=8){
        printf("\nRainha -> Esquerda!");
        rainha++;
    }

    return 0;
}