 #include <stdio.h>
int main () {

int bispo = 1, rainha;

    
    //movendo a torre 5 casas para direita
    for (int torre = 0; torre < 1; torre++) 
    {
        printf ("Torre para Direita!\n"); //imprimindo direção de movimento
    }

    //movendo bispo para diagonal
    do {
        printf ("%cBispo para cima!\n", bispo);
        printf ("%cBispo para direita!\n", bispo);
       
        bispo++;
    
    }while (bispo < 1);

    //rainha se move em qualquer direção
    while (rainha < 1)
    {
        printf ("%cRainha para cima!\n", rainha);
        printf ("%cRainha para direita!\n", rainha);
        printf ("%cRainha para baixo!\n", rainha);
        printf ("%cRainha para esquerda!\n", rainha);
        rainha++;
    }
    
    
    
    
    
    
        


return 0;

}
