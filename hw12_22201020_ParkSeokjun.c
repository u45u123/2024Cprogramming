#include <stdio.h>
#define YES 1
#define NO 0

int isLeapYear(int year) {
    if (year % 400 == 0)
        return YES;
    if (year % 100 == 0)
        return NO;
    if (year % 4 == 0)
        return YES;
    else
        return NO;
}

int DaysofMonth(int year, int month) {
    switch (month) {
    case 2:
        if (isLeapYear(year) == YES)
            return 29;
        else
            return 28;
    case 4:
    case 6:
    case 9:
    case 11:
        return 30;
    default:
        return 31;
    }
}

int FirstDay(int year, int month) {
    int dsum = 0;
    int i;
    for (i = 1900; i < year; i++) {
        if (isLeapYear(i) == YES)
            dsum += 366;
        else
            dsum += 365;
    }
    for (i = 1; i < month; i++) {
        dsum += (DaysofMonth(year, i));
    }

    return (dsum + 1) % 7;
}

int main() {
    int year, month;

    printf("달력을 알고싶은 년, 월을 입력하시오 :");
    scanf("%d %d", &year, &month);

    printf(" Sun Mon Tue Wed Thu Fri Sat\n");

    int first_day_of_month = FirstDay(year, month);

    for (int i = 0; i < first_day_of_month; i++) {
        printf("    ");
    }
    for (int day = 1; day <= DaysofMonth(year, month); day++) {
        printf("%4d", day);
        if ((first_day_of_month + day) % 7 == 0)
            printf("\n");
    }
    printf("\n");

    return 0;
}
