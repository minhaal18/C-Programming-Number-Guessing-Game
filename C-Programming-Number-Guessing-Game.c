#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    srand(time(0));
    int guess_number=rand()%100+1;
    int guess;
    int count=0;

       printf("================================\n");
    printf("      NUMBER GUESSING GAME\n");
    printf("================================\n");
    printf("I have selected a number between 1 and 100.\n");
    printf("Can you guess it?\n\n");

do{
    printf("enter the guess number:\n");
    scanf("%d",&guess);
    count++;
if(guess<guess_number){
    printf("higher number please!\n");
}
else if(guess>guess_number){
    printf("lower number please!\n");
    
}
else{
    printf("congratulation\n");
}

}while(guess!=guess_number);


printf("correct guess!\n");
printf("You guessed the number in %d attempts.",count);

return 0;
}
