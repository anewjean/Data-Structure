# include <stdio.h>

int main() {
    int x, y, z;
    int *px, *py, *pz, *tmp;

    px = &x;
    py = &y;
    pz = &z;

    // px, py, pz에 있는 주소들을 py, pz, px로 이동시킨 후
    // 순서가 바뀐 최종 값을 포인터를 이용해서 출력!
    scanf("%d %d %d", px, py, pz);

    tmp = px;
    px = pz;
    pz = py;
    py = tmp;

    // 함수로 구현 시

    printf("%d %d %d", *px, *py, *pz);
    return 0;
}