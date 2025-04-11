# include <stdio.h>

void main(){
    int x = 10;
    int y = x-- + 5 + --x;

    printf("변수 x의 값은 %d이고, 변수 y의 값은 %d입니다. \n", x, y);
}