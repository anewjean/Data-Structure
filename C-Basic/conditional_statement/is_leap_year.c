# include <stdio.h>

// 단일 if-else
// char* is_leap_year(int year) {
//     char* year_name;

//     if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
//         year_name = "윤년";
//     } else {
//         year_name = "평년";
//     }
//     return year_name;
// }

// 중첩 if-else
char* is_leap_year(int year) {
    char* year_name;
    if (year % 4 == 0) {
        if (year % 400 == 0) {
            year_name = "윤년"; 
        } else if (year % 100 == 0) {
            year_name = "평년";
        } else {
            year_name = "윤년";
        }
    } else {
        year_name = "평년";
    }
    return year_name;
}

int main() {
    int year;
    scanf("%d", &year);
    printf("%s", is_leap_year(year));
    return 0;
}