#include <stdio.h>
int main () {

int bispo = 0, rainha = 0, cavalo = 1;

    
    //movendo a torre 5 casas para direita
    for (int torre = 0; torre < 5; torre++) 
    {
        printf ("Torre para Direita!\n"); //imprimindo direção de movimento
        
    }
    printf ("\n");

    //movendo bispo para diagonal
    do {
        printf ("Bispo para cima!\n", bispo);
        printf ("Bispo para direita!\n", bispo);
       
        bispo++;
    
    }while (bispo < 1);

    printf ("\n");

    //rainha se move em qualquer direção
    while (rainha < 1 )
    {
        printf ("Rainha para cima!\n", rainha);
        printf ("Rainha para direita!\n", rainha);
        printf ("Rainha para baixo!\n", rainha);
        printf ("Rainha para esquerda!\n", rainha);
        rainha++;

        printf ("\n");
    
    }

    while (cavalo--)
    {
        for (int i = 0; i < 2; i++)
        {
            printf ("Cavalo baixo!\n");
        }
        
        printf ("Cavalo esquerda!\n");
    }
    
    
   
    
    
    
    
        


return 0;

}
