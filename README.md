# Nimbus_Project_Smart-Vehicle-Maintenance-Tracker-Real-world_Project_No.48
Develop a program that:  Records vehicle details (number, last service date, mileage).  Predicts next service using average daily usage.  Sends alerts for overdue services.
🛠️ Smart Vehicle Maintenance Tracker

A modular C project for predicting service schedules and tracking fleet maintenance.

📌 Overview

The Smart Vehicle Maintenance Tracker is a C-based mini-project designed to help fleet managers monitor vehicle health, track service records, and get timely maintenance alerts.
It uses structures, functions, arrays, pointers, and dynamic memory — aligning perfectly with academic requirements and real-world fleet management systems.

🚗 Real-World Context

Fleet managers often face challenges such as:

Tracking multiple vehicles

Monitoring service history

Predicting next service schedules

Preventing overdue maintenance

This program simplifies the process with automated calculations and alerting logic.

🎯 Project Objectives

The system allows users to:

Record vehicle number, mileage, and last service date

Estimate next service date/mileage based on average daily usage

Generate alerts for overdue services

Maintain dynamic, expandable records using pointers

Provide reports using arrays and functions

🧩 Features

✔️ Add new vehicle records
✔️ Predict next service using mileage + avg usage
✔️ Overdue alerts using date difference
✔️ Dynamic storage using malloc/realloc
✔️ Modular code (4 headers + 4 source files)
✔️ Hinglish commented code (student-friendly)

📁 Project Structure
📦 Smart-Vehicle-Maintenance-Tracker
├── main.c
├── vehicle.c
├── utils.c
├── service.c
├── ui.c
├── vehicle.h
├── utils.h
├── service.h
├── ui.h
└── README.md

📘 Concepts Applied (Syllabus Mapping)
Problem Solving

Identifying fleet maintenance problems

Converting real-world logic into program flow

Decision Making

Overdue alert logic

Service scheduling rules

Arrays & Functions

Vehicle record storage

Reporting all vehicles

Modular codebase

Structures

Vehicle structure stores:

Number

Last service date

Mileage

Average daily usage

Pointers & Dynamic Memory

Runtime expansion of vehicle list using realloc()

Returned pointer arrays for record management

🎓 Course Outcomes Covered (CO Mapping)
CO	Description	How Project Achieves It
CO1	Define scheduling algorithm	Mileage-based + date-based service prediction
CO2	Implement condition logic	Overdue check, reminder alerts
CO3	Use arrays/functions	Report generation, searching, multiple vehicles
CO4	Use dynamic memory & pointers	Dynamic vehicle list using malloc & realloc
CO5	Build modular system	4 source + 4 header files, well-structured code
🔧 Compilation & Execution
gcc main.c vehicle.c utils.c service.c ui.c -o mainttrack
./mainttrack

📝 Future Enhancements

Exporting data to text/CSV

Sorting vehicles by next service date

Service history logs

Maintenance cost tracking

Real date/time library integration

© License

This is a student academic project and can be reused for learning purposes.
