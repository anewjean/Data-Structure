# include <stdio.h>

void print_stars(int n) {
    // i번째 줄에 i+1개의 별을 출력하기
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j <= i; ++j) {
            printf("*");
        }
        printf("\n");
    }
}

int main() {
    int n;
    scanf("%d", &n);
    print_stars(n);
    return 0;
}