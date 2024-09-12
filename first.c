#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){

    srand(time(0));

     int randomNumber = (rand() % 100) + 1; 
     int no_of_guesses = 0;
     int guessed_number;

     //printf("random number %d\n",randomNumber);

    do
    {
        printf("Geuss the number: ");
        scanf("%d",&guessed_number);

        if (guessed_number>randomNumber)
        {
            printf("lower number please \n");
        }
        else if (guessed_number<randomNumber)
        {
            printf("heigher number please \n");
        }
        else{
            printf("Congratulation! \n");
        }
        no_of_guesses++ ;
        
    }
    while (guessed_number!=randomNumber);
    printf("you gessed the number in %d gesses: ",no_of_guesses);
    
    
    return 0;
}