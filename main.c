/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

******************************************************************************  
/*
Preencha um algoritmo que leia 10 números e os coloque em um vetor.
Ao final, apresente na tela os valores armazenados nas posições pares
*/

#include <stdio.h>

int main(){
    int vetor[10];
    int i;
    
    for(i = 0 ; i < 10 ; i++){
    printf("Informe o valor da posicao %i do vetor:", i);
    scanf("%i", &vetor[i]);
    }
        
    for(i = 0 ; i < 10 ; i+=2){
        printf("%d - ", vetor[i]);
    }
}
