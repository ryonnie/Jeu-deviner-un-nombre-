#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include<stdbool.h>
int main() {
   
    srand(time(NULL));
    //print l9lawi dyal random
    int randomNumber = (rand() % 30) + 1;



  int nb;
  int i =0; // i ==essai rahi btw
  printf("saisir Nb :");scanf("%d",&nb);
    while(4>i){
    if (nb > randomNumber){
        printf("c'est Grand mr!\n");
        i++;
        printf("saisir Nouvelle nb :");scanf("%d",&nb);
        
    }
    
    else if (nb<randomNumber){
        printf("c'est petit mr!\n");
        
        i++;
        printf("saisir Nouvelle nb :");scanf("%d",&nb);
       
    }
    else if (nb==randomNumber){
        printf("You won!\n");
        break;
    }
    
    }
    if (4==i){
    printf("essai mt3ik is over come back tommorow nigga!\n");}
    return 0;
}
