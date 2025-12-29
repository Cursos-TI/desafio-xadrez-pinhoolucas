#include <stdio.h>

//Movimentação da Torre -> 5x Direita!
void mov_torre(int torre){
    if(torre>0){
        printf("\nTorre -> Direita!"); 
        mov_torre(torre - 1);
    }
}


//Movimentação do Bispo -> 5x Cima, Direita!
void mov_bispo(int bispo){
    
    if(bispo>0){
    
        for(int i=0; i<1; i++){
            printf("\nBispo -> Cima, ");
            for(int j=0; j<1; j++){
             printf("Direita!");
            }
    }
     mov_bispo(bispo - 1);
    }
}


//Movimentação da Rainha -> 8x Esquerda
void mov_rainha(int rainha){
    
    if(rainha>0){
        printf("\nRainha -> Esquerda!");
        mov_rainha(rainha - 1);
    }
    
}

int main(){

    int cavalo=1;
    
    //chama função que movimenta a torre
    mov_torre(5);
    
    printf("\n");
    
    //chama função que movimenta o bispo
    mov_bispo(5);

    printf("\n");
    
    //chama função que movimenta a rainha
    mov_rainha(8);
    
    printf("\n\n");
    
    //Movimentação do cavalo 2x Cima e 1x Direita
    for(cavalo=1; cavalo<=3; cavalo++){
        
        if(cavalo%3==0){
            printf("Cavalo -> Direita!");
        } else{
            printf("Cavalo -> Cima!\n");
        }
    }
    
   
    return 0;
}