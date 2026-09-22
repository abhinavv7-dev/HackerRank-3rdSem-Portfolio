#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* timeConversion(char* s) {
    char* result = (char*)malloc(9 * sizeof(char));
    int hh, mm, ss;
    char ampm[3];

    sscanf(s, "%2d:%2d:%2d%2s", &hh, &mm, &ss, ampm);

    if (strcmp(ampm, "AM") == 0) {
        if (hh == 12) hh = 0;
    } else {
        if (hh != 12) hh += 12;
    }

    snprintf(result, 9, "%02d:%02d:%02d", hh, mm, ss);
    return result;
}