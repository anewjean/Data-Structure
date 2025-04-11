#include <stdio.h>

char* baseball_game(int answer1, int answer2, int answer3, int predict1, int predict2, int predict3) {
    static char answer[40];
    int strike = 0;
    int ball = 0;

    if (answer1 == predict1) strike++;
    if (answer2 == predict2) strike++;
    if (answer3 == predict3) strike++;
    if (answer1 == predict2 || answer1 == predict3) ball++;
    if (answer2 == predict1 || answer2 == predict3) ball++;
    if (answer3 == predict1 || answer3 == predict2) ball++;

    sprintf(answer, "%dS%dB", strike, ball);
    return answer;
}

int main() {
    int answer1, answer2, answer3;
    int predict1, predict2, predict3;

    scanf("%d %d %d", &answer1, &answer2, &answer3);
    scanf("%d %d %d", &predict1, &predict2, &predict3);
    
    printf("%s", baseball_game(answer1, answer2, answer3, predict1, predict2, predict3));
    return 0;
}