#ifndef VEHICLE_H
#define VEHICLE_H


#define NUM_LEN 20


// Vehicle structure storing all important info
typedef struct {
char number[NUM_LEN]; // vehicle number like "UP32 AB 1234"
int last_service_day; // store date as int (1–31)
int last_service_month; // month (1–12)
int last_service_year; // year
int mileage; // current mileage
float avg_daily_use; // estimated running per day
int next_service_due; // mileage at next service
} Vehicle;


void init_vehicle(Vehicle *v);
void print_vehicle(const Vehicle *v);


#endif
