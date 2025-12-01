#include <stdio.h>
#include <string.h>
#include "vehicle.h"
#include "utils.h"


void init_vehicle(Vehicle *v) {
// yeh function ek blank vehicle struct taiyaar karta hai
v->number[0] = '\0';
v->last_service_day = 1;
v->last_service_month = 1;
v->last_service_year = 2000;
v->mileage = 0;
v->avg_daily_use = 0.0f;
v->next_service_due = 0;
}


void print_vehicle(const Vehicle *v) {
printf("Vehicle: %s | Mileage: %d km | Avg/Day: %.1f km\n",
v->number, v->mileage, v->avg_daily_use);
printf("Last Service: %02d-%02d-%04d | Next Service At: %d km\n",
v->last_service_day, v->last_service_month, v->last_service_year,
v->next_service_due);
}
