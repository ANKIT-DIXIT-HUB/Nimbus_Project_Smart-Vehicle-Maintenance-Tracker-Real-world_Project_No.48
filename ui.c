#include <stdio.h>
#include "ui.h"


void show_banner() {
printf("==============================\n");
printf(" SMART VEHICLE TRACKER 2K25\n");
printf("==============================\n");
}


void show_menu() {
printf("\n1. Add Vehicle\n");
printf("2. View All Vehicles\n");
printf("3. Check Overdue Alerts\n");
printf("4. Exit\n");
}


void wait_for_enter() {
printf("Press Enter to continue...");
getchar();
}
