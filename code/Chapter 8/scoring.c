// scoring.c: Using a two-dimensional array to store basketball point totals

#include <stdio.h>
#define PLAYERS 5
#define GAMES 4

int scores[6][5];
float score_avg[6], bestavg;
int point_total, bestplayer;
int counter1, counter2;

main()
{
    // The outer loop is for each of the games
    for (counter2 = 1; counter2 <= GAMES; counter2++)
    {
        printf("\nGetting scoring totals for Game #%d.\n", counter2);
        // The inner loop is for each player in the specific game.
        for (counter1 = 1; counter1 <= PLAYERS; counter1++)
        {
            printf("What did player #%d score in the game\? ", counter1);
            scanf("%d", &scores[counter1][counter2]);
        }
    }

    // Loop through the array to calculate scoring average per player
    for (counter1 = 1; counter1 <= PLAYERS; counter1++)
    {
            point_total = 0;
            for (counter2 = 1; counter2 <= GAMES; counter2++)
            {
                point_total += scores[counter1][counter2];
            }
            score_avg[counter1] = (float)point_total/GAMES;
    }

    // Now loop through and store who has the best scoring average
    bestavg = 0;
    for (counter1 = 1; counter1 <= PLAYERS; counter1++)
    {
        if (score_avg[counter1] > bestavg)
        {
            bestavg = score_avg[counter1];
            bestplayer = counter1;
        }
    }

    printf("\nPlayer #%d had the best scroring average,\n", bestplayer);
    printf("at %.2f points per game.\n", score_avg[bestplayer]);

    return (0);
}
