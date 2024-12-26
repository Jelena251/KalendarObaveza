#include "klasa1.h"

// Constructor definition
klasa1::klasa1(string taskName, string taskDescription, time_t taskDeadline, Category taskCategory, Status taskStatus)
    : name(taskName), description(taskDescription), deadline(taskDeadline), category(taskCategory), status(taskStatus) {}

// Method to display task details
void klasa1::displayTask() {
    cout << "Task Name: " << name << endl;
    cout << "Description: " << description << endl;

    // Safely convert time_t to a readable string
    char buffer[26]; // Enough space for ctime_s
    ctime_s(buffer, sizeof(buffer), &deadline); // Use ctime_s instead of ctime
    cout << "Deadline: " << buffer;

    cout << "Category: ";
    switch (category) {
    case fakultet: cout << "Fakultet"; break;
    case hobi: cout << "Hobi"; break;
    case kucne_obaveze: cout << "Kucne obaveze"; break;
    }
    cout << endl;

    cout << "Status: ";
    switch (status) {
    case zavrseno: cout << "Zavrseno"; break;
    case zapoceto: cout << "Zapoceto"; break;
    case produzen_deadline: cout << "Produzen deadline"; break;
    case probijen_deadline: cout << "Probijen deadline"; break;
    }
    cout << endl;
}
