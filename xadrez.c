 #include <stdio.h>
int main () {

int bispo = 0, rainha = 0;

    
    //movendo a torre 5 casas para direita
    for (int torre = 0; torre < 1; torre++) 
    {
        printf ("Torre para Direita!\n"); //imprimindo direção de movimento
    }

    //movendo bispo para diagonal
    do {
        printf ("Bispo para cima!\n", bispo);
        printf ("Bispo para direita!\n", bispo);
       
        bispo++;
    
    }while (bispo < 1);

    //rainha se move em qualquer direção
    while (rainha < 1)
    {
        printf ("Rainha para cima!\n", rainha);
        printf ("Rainha para direita!\n", rainha);
        printf ("Rainha para baixo!\n", rainha);
        printf ("Rainha para esquerda!\n", rainha);
        rainha++;
    }
    
    
    
    
    
    
        


return 0;

}
