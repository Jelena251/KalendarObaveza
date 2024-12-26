#ifndef KLASA1_H
#define KLASA1_H

#include <iostream>
#include <string>
#include <ctime>
using namespace std;

// Enum for task categories
enum Category {
    fakultet = 1,
    hobi = 2,
    kucne_obaveze = 3
};

// Enum for task status
enum Status {
    zavrseno = 1,
    zapoceto = 2,
    produzen_deadline = 3,
    probijen_deadline = 4
};

// Class klasa1 declaration
class klasa1 {
private:
    string name;          // Name of the task
    string description;   // Description of the task
    time_t deadline;      // Deadline of the task
    Category category;    // Category of the task
    Status status;        // Status of the task

public:
    // Constructor
    klasa1(string taskName, string taskDescription, time_t taskDeadline, Category taskCategory, Status taskStatus);

    // Method to display task details
    void displayTask();
};

#endif // KLASA1_H
