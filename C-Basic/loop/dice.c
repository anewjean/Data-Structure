#include <stdio.h>

void find_dice_combinations(int n) {
    for (int i = 1; i <= 6; ++i) {
        for (int j = 1; j <= 6; ++j) {
            for (int k = 1; k <= 6; ++k) {
                if (i + j + k == n) {
                    printf("%d %d %d\n", i, j, k);
                }
            }
        }
    }
}

int main() {
    int N;
    printf("3~18 사이의 정수를 입력하세요: ");
    scanf("%d", &N);

    if (N < 3 || N > 18) {
        printf("입력값이 범위를 벗어났습니다.\n");
        return 1;
    }

    find_dice_combinations(N);
    return 0;
}