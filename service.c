#include <stdio.h>
#include "service.h"
#include "utils.h"


void calculate_next_service(Vehicle *v) {
// assume every 5000km service — student-level realistic logic
v->next_service_due = ((v->mileage / 5000) + 1) * 5000;
}


int is_overdue(const Vehicle *v, int cd, int cm, int cy) {
// mileage-based overdue
if (v->mileage >= v->next_service_due) return 1;


// time-based overdue: more than 180 days since last service
int diff = days_difference(v->last_service_day, v->last_service_month,
v->last_service_year, cd, cm, cy);


if (diff > 180) return 1;


return 0;
}
