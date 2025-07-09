# bus-reservation-system
 
Group 7

Full Name                                                    Student Id                                        GitHub Username
1.Biruk Mulugeta                                             RCD/0181/2017                                     birukmulugeta11
2.Ermias Merkebu                                             RCD/0181/2017                                     ermiasmerkebu
3.Amanuel  Daniel                                            RCD/0181/2017                                     emanueldthe27
4.Oliad Zenebe                                               RCD/0181/2017                                     oli212121
5.Eden Alemu                                                 RCD/0181/2017                                     Eden7712
6.Abdulwhab Miftah                                           RCD/0181/2017                                     Mip1818322
7.Abeba Manaye                                               RCD/0181/2017                                     fev12124


uses basic features of C++ like:

Structures (struct)
Arrays
Control statements (if, switch, for, do-while)
Functions for modularity
iostream for input/output

how it work

Code Documentation & Function Description
Here’s a breakdown of the main parts of the code:
1. Global Constants & Structures
const int MAX_BUSES = 5; 
const int SEATS = 10; 
struct Bus { string number; 
string origin; 
string destination; 
string time;
 bool seats[SEATS]; // true = booked }; 
MAX_BUSES: Maximum number of buses the system can hold.
SEATS: Each bus has 10 seats.
Bus: Structure representing a bus with details and a seat array.
2. Global Variables
Bus buses[MAX_BUSES]; int busCount = 0; 
buses[]: Array to store all buses.
busCount: Tracks how many buses have been added.
3. Function: addBus()
void addBus() { ... } 
Prompts the user to enter: 
Bus number,Origin,Destination,Departure time
Initializes all seats as available (false)
Adds the bus to the system
4. Function: showBuses()
void showBuses() { ... } 
Displays a list of all added buses with their route and departure time.
If no buses are added, it prints a message.
5. Function: reserveSeat()
void reserveSeat() { ... } 
Shows all buses to the user.
Asks the user to select a bus and seat number.
If the seat is available, it books the seat (sets it to true).
If the seat is already booked or invalid, it shows an error.
6. Function: showMenu()
void showMenu() { ... } 
Displays the main menu options: 
Add Bus,Show  Buses, Reserve Seat, Exit
7. Main Program: main()
int main() { ... } 
Loops through the menu using a do-while loop
Calls the corresponding function based on user choice
Ends the loop if the user chooses option 4 Exit
