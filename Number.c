#include<stdio.h>
int main()
{
    int secret=7;
    int guess;
    int i;
    printf("welcome to number guessing game1\n");

    for (i=1;i<=3;i++)
    {
        printf("Guess a number between 1 and 10:");
        scanf("%d",&guess);
        if(guess == secret)
        {
            printf("congratulations! correct guess!\n");

        }
        else if (guess < secret)
        {
            printf("Too low! Try again.\n");
        }
    }
    return 0;
}