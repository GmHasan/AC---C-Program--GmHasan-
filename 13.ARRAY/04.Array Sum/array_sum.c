#include<stdio.h>
int main() {
    int scores[5];
    scores[0] = 89;
    scores[1] = 82;
    scores[2] = 90;
    scores[3] = 86;
    scores[4] = 110;

    //! ~~> Find SUM of Scores
    int sum = 0;
    for(int i = 0; i<=4; i++) {
        sum = sum + scores[i];
    }
    printf("Sum = %d\n", sum);

    //! ~~> Find Average Score
    printf("Average = %d\n", sum / 5);

    //! ~~> Find Highest Score
    int max = scores[0];
    for(int i = 0; i <= 4; i++) {
        if(scores[i] > max) {
            max = scores[i];
        }
    }
    printf("Max = %d\n", max);
        
    return 0;
}