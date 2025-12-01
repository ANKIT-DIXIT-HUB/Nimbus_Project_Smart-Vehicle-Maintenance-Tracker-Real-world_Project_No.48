#ifndef SERVICE_H
#define SERVICE_H


#include "vehicle.h"


// Predict next service by mileage
void calculate_next_service(Vehicle *v);


// Check if overdue based on current date & usage
int is_overdue(const Vehicle *v, int cd, int cm, int cy);


#endif
