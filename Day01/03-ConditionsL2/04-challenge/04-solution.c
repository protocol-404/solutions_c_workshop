#include <stdio.h>

int main()
{
    int score, career, recompenses;

    printf("enter the score of performance (0-100): ");
    scanf("%d", &score);

    printf("enter the duration of your career : ");
    scanf("%d", &career);
    
    printf("enter the nbr of recompenses : ");
    scanf("%d", &recompenses);

    float bonus = 0;
    if (recompenses == 1)
        bonus = 0.10;
    else if (recompenses >= 2)
        bonus = 0.20;

    float finalScore = score + (score * bonus);

    if (finalScore >= 90 && career >= 5)
        printf("exelent\n");
    else if (finalScore >= 75 && career >= 3)
        printf("bravo\n");
    else if (finalScore >= 50 && career < 3)
        printf("good\n");
    else
        printf("low\n");

    return 0;
}
