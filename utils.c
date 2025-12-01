#include <stdio.h>
#include <string.h>
#include "utils.h"


int read_int(const char *msg) {
char buf[50];
printf("%s", msg);
fgets(buf, sizeof(buf), stdin);
return atoi(buf);
}


float read_float(const char *msg) {
char buf[50];
printf("%s", msg);
fgets(buf, sizeof(buf), stdin);
return atof(buf);
}


void read_string(const char *msg, char *buf, int max) {
printf("%s", msg);
fgets(buf, max, stdin);
buf[strcspn(buf, "\n")] = 0;
}


// simple but student-friendly date difference calculator
typedef struct { int d,m,y; } Date;


int days_difference(int d1, int m1, int y1, int d2, int m2, int y2) {
// easy way: convert to approximate "absolute days"
int days1 = y1*365 + m1*30 + d1;
int days2 = y2*365 + m2*30 + d2;
return days2 - days1;
}
