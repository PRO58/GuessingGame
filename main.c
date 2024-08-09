#include <time.h>
#include <stdio.h>
#include <stdlib.h>



//Simple random guessing number game;
int main()
{

    int input;
    srand(time(NULL));
    int r = rand() % 6;
    while(input != r){
        printf("Enter a number to guess 1-5: ");
        scanf("%d", &input);



    }
    printf("You have guessed the number correctly");


}
