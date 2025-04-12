# include <stdio.h>

void print_stars(int n) {
    // i번째 줄에 (n-i)*2-1개의 별을 출력하기 0번째에 
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < ((n-i)*2-1); ++j) {
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