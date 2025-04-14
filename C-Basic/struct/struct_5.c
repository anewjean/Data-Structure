#include <stdio.h>

#define MAX 10

// 구조체 정의
typedef struct {
    int gender;     // 성별 (1: 남자, 2: 여자)
    float weight;   // 체중 (kg)
    float height;   // 키 (cm)
} Student;

int main() {
    int n;  // 학생 수
    Student students[MAX];

    int underweight = 0, normal = 0, overweight = 0;

    printf("학생 수 입력 (최대 %d명): ", MAX);
    scanf("%d", &n);

    if (n > MAX || n <= 0) {
        printf("학생 수는 1 ~ %d명 사이여야 합니다.\n", MAX);
        return 1;
    }

    // 입력 받기
    for (int i = 0; i < n; i++) {
        printf("\n학생 %d 정보 입력:\n", i + 1);
        printf("성별 (남자:1, 여자:2): ");
        scanf("%d", &students[i].gender);

        printf("체중 (kg): ");
        scanf("%f", &students[i].weight);

        printf("키 (cm): ");
        scanf("%f", &students[i].height);
    }

    // BMI 계산 및 등급 분류
    for (int i = 0; i < n; i++) {
        float h_m = students[i].height / 100.0f;  // cm → m
        float bmi = students[i].weight / (h_m * h_m);

        if (bmi < 18.5)
            underweight++;
        else if (bmi < 23.0)
            normal++;
        else
            overweight++;
    }

    // 출력
    printf("\n=== 신체 등급 통계 ===\n");
    printf("저체중 인원 수: %d명\n", underweight);
    printf("정상 인원 수: %d명\n", normal);
    printf("과체중 인원 수: %d명\n", overweight);

    return 0;
}
