# include <stdio.h>

int main() {
    int ar[50];
    int *p = ar; // 배열의 첫 주소
    int count = 0;

    for (p=ar; p < ar + 50; p++) {
        scanf("%d", p); // p값을 받는다
        if (*p == 0) break;
        count ++;
    }

    printf("%d\n", count);
    return 0;
}