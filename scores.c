#include <stdio.h>
int main(void)
{
    //get academic data from 3 students and print out which subject needs the most amount of improvement
    int scores[3];
    for(int i = 1; i <= 3; i++)
    {
      printf("Score %d: ",i);
      scanf("%d", &scores[i]);
    }
    printf("You got %d/300",scores[1]+scores[2]+scores[3]);

}