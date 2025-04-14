# include <stdio.h>

typedef struct
{
    int hr, min, sec;
} Time; 

int calc_time_diff(Time *first_time, Time *second_time) {
    int hr_diff, min_diff, sec_diff;

    int first_hr = first_time->hr;
    int first_min = first_time->min;
    int first_sec = first_time->sec;
    int second_hr = second_time->hr;
    int second_min = second_time->min;
    int second_sec = second_time->sec;
    
    if (second_sec >= first_sec) {
        sec_diff = second_sec - first_sec;
    } else {
        sec_diff = 60 + second_sec - first_sec;
        second_min -= 1;
    }

    if (second_min >= first_min) {
        min_diff = second_min - first_min;
    } else {
        min_diff = 60 + second_min - first_min;
        second_hr -= 1;
    }

    if (second_hr > first_hr) {
        hr_diff = second_hr - first_hr;
    } else if (second_hr == first_hr){
        hr_diff = 0;
    } else {
        return -1;
    }

    printf("%d %d %d", hr_diff, min_diff, sec_diff);
}

int main() {
    Time time_1, time_2;

    scanf("%d %d %d", &time_1.hr, &time_1.min, &time_1.sec);
    scanf("%d %d %d", &time_2.hr, &time_2.min, &time_2.sec);

    Time first_time = {time_1.hr, time_1.min, time_1.sec};
    Time second_time = {time_2.hr, time_2.min, time_2.sec};

    calc_time_diff(&time_1, &time_2);
}