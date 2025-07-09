#include <iostream>
using namespace std;

const int MAX_BUSES = 5;
const int SEATS = 10;

struct Bus {
    string number;
    string origin;
    string destination;
    string time;
    bool seats[SEATS]; // true = booked
};

Bus buses[MAX_BUSES];
int busCount = 0;

void addBus() {
    if (busCount >= MAX_BUSES) {
        cout << "Bus limit reached.\n";
        return;
    }
    cout << "Enter Bus Number: ";
    cin >> buses[busCount].number;
    cout << "Enter Origin: ";
    cin >> buses[busCount].origin;
    cout << "Enter Destination: ";
    cin >> buses[busCount].destination;
    cout << "Enter Departure Time: ";
    cin >> buses[busCount].time;

    for (int i = 0; i < SEATS; i++)
        buses[busCount].seats[i] = false;

    busCount++;
    cout << "Bus added successfully.\n";
}

void showBuses() {
    if (busCount == 0) {
        cout << "No buses available.\n";
        return;
    }

    for (int i = 0; i < busCount; i++) {
        cout << i + 1 << ". Bus " << buses[i].number << " | "
             << buses[i].origin << " -> " << buses[i].destination
             << " at " << buses[i].time << endl;
    }
}

void reserveSeat() {
    int choice, seatNo;
    showBuses();
    if (busCount == 0) return;

    cout << "Choose a bus (1-" << busCount << "): ";
    cin >> choice;
    if (choice < 1 || choice > busCount) {
        cout << "Invalid choice.\n";
        return;
    }

    Bus &bus = buses[choice - 1];

    cout << "Available Seats: ";
    for (int i = 0; i < SEATS; i++) {
        if (!bus.seats[i])
            cout << (i + 1) << " ";
    }
    cout << endl;

    cout << "Choose seat number (1-" << SEATS << "): ";
    cin >> seatNo;

    if (seatNo < 1 || seatNo > SEATS || bus.seats[seatNo - 1]) {
        cout << "Invalid or already booked seat.\n";
        return;
    }

    bus.seats[seatNo - 1] = true;
    cout << "Seat " << seatNo << " booked on Bus " << bus.number << ".\n";
}

void showMenu() {
    cout << "\nBUS RESERVATION SYSTEM \n";
    cout << "1. Add Bus\n";
    cout << "2. Show Buses\n";
    cout << "3. Reserve Seat\n";
    cout << "4. Exit\n";
    cout << "Choose an option: ";
}

int main() {
    int choice;
    do {
        showMenu();
        cin >> choice;
        switch (choice) {
            case 1: addBus(); break;
            case 2: showBuses(); break;
            case 3: reserveSeat(); break;
            case 4: cout << "Exiting...\n"; break;
            default: cout << "Invalid option.\n";
        }
    } while (choice != 4);

    return 0;
}