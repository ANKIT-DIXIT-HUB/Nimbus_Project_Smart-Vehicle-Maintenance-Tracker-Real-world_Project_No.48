#include <stdio.h>
#include "service.h"
#include "ui.h"


int main() {
show_banner();


int count = 0;
Vehicle *arr = NULL; // dynamic array — pointers work here


while (1) {
show_menu();
int ch = read_int("Enter choice: ");


if (ch == 1) {
// add new vehicle
arr = realloc(arr, (count+1)*sizeof(Vehicle));
init_vehicle(&arr[count]);


read_string("Enter Vehicle Number: ", arr[count].number, NUM_LEN);
arr[count].last_service_day = read_int("Last service day: ");
arr[count].last_service_month = read_int("Last service month: ");
arr[count].last_service_year = read_int("Last service year: ");
arr[count].mileage = read_int("Current mileage: ");
arr[count].avg_daily_use = read_float("Average daily usage (km): ");


calculate_next_service(&arr[count]);
printf("Vehicle added successfully!\n");
count++;
wait_for_enter();


} else if (ch == 2) {
if (count == 0) printf("No records found.\n");
else {
for (int i = 0; i < count; i++) {
printf("\n--- Vehicle %d ---\n", i+1);
print_vehicle(&arr[i]);
}
}
wait_for_enter();


} else if (ch == 3) {
int d = read_int("Current day: ");
int m = read_int("Current month: ");
int y = read_int("Current year: ");


printf("\nOverdue Vehicles:\n");
int found = 0;


for (int i = 0; i < count; i++) {
if (is_overdue(&arr[i], d, m, y)) {
print_vehicle(&arr[i]);
found = 1;
}
}
if (!found) printf("No overdue vehicles!\n");
wait_for_enter();


} else if (ch == 4) {
printf("Exiting... Bye!\n");
break;


} else {
printf("Invalid option!\n");
}
}


free(arr);
return 0;
}
