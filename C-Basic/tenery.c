# include <stdio.h>

void main() {
    // 조건식 ? 반환값1 : 반환값2
    int num01 = 15;
    int num02 = 8;
    int result;

    result = (num01 > num02) ? num01 : num02;
    printf("둘 중에 더 큰 수는 %d입니다.\n", result);
}