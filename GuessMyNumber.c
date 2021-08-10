#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{ int number,guess,num_guess=0;
  char *name[20];
    //printf("Enter your name: \n"); 
    scanf("%s",&name);
    
    printf("*---- WELCOME TO GUESS MY NUMBER ----*\n");
    
    srand(time(0));
    number=rand()%100+1;        // 100 -1 limit %100+1 is not a syntax just a formula
    //printf("Random number is %d \n",number);           //so that the player cannot see
    //  keep guessing untill the  number is found
    do{
    printf("Guess the number between 1-100: \n");
    scanf("%d",&guess);
      {
          if (guess>number)
           printf("LOWER NUMBER PLEASE\n");
          else if(guess<number)
           printf("HIGHER NUMBER PLEASE\n");
          else 
           printf("Hurray!! %s guessed it in %d guesses \n",name,num_guess);
          num_guess++;   // it is initialized as 0 ,so as it increases the value, is stored n later displayed
      }
    }while(guess!=number);
    
    return 0;
}

