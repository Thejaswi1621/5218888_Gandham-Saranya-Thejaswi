#include <stdio.h>
#include <string.h>
void timeConversion(char *s) {
    int hour;
    char period[3];
    strncpy(period, s + 8, 2);
    period[2] = '\0';
    sscanf(s, "%2d", &hour);
    if (strcmp(period, "AM") ==0) {
        if (hour == 12) {
            hour = 0;
        }
    } else {
        if (hour != 12) {
            hour += 12;
        }
    }
    printf("%02d", hour);
    for (int i = 2; i < 8; i++) {
        putchar(s[i]);
    }
    putchar('\n');
}
int main() {
    char time[11];
    scanf("%s", time);
    timeConversion(time);
    return 0;
}
