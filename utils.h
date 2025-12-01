ifndef UTILS_H
#define UTILS_H


int read_int(const char *msg);
float read_float(const char *msg);
void read_string(const char *msg, char *buf, int max);


// helper to calculate days between two dates
int days_difference(int d1, int m1, int y1, int d2, int m2, int y2);


#endif
