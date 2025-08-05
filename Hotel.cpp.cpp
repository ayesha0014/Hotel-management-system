#include<iostream>
using namespace std;

void tableReservation() {
    int choice;
    cout << "Please enter which table you want to reserve!" << endl;
    cout << "Select 1 for 2 seats table" << endl;
    cout << "Select 2 for 4 seats table" << endl;
    cout << "Select 3 for 7 seats table" << endl;
    cout << "Enter your choice: ";
    cin >> choice;

    if (choice == 1)
        cout << "You have successfully reserved the 2 seats table!" << endl;
    else if (choice == 2)
        cout << "You have successfully reserved the 4 seats table!" << endl;
    else if (choice == 3)
        cout << "You have successfully reserved the 7 seats table!" << endl;
    else
        cout << "Invalid choice!" << endl;
}

void roomReservation() {
    int choice;
    cout << "Please enter which room you want to reserve!" << endl;
    cout << "Select 1 for Single Bed Room" << endl;
    cout << "Select 2 for Double Bed Room" << endl;
    cout << "Select 3 for Suite Room" << endl;
    cout << "Enter your choice: ";
    cin >> choice;

    if (choice == 1) {
        cout << "You have successfully reserved the Single Bed Room!" << endl;
        cout << "For single bed room your charges will be PKR 20000 for one night." << endl;
    }
    else if (choice == 2) {
        cout << "You have successfully reserved the Double Bed Room!" << endl;
        cout << "For Double bed room your charges will be PKR 35000 for one night." << endl;
    }
    else if (choice == 3) {
        cout << "You have successfully reserved the Suite Room!" << endl;
        cout << "For Suite Room your charges will be PKR 50000 for one night." << endl;
    }
    else
        cout << "Invalid choice!" << endl;
    int totalcharges, Rooms, nights;
    const   int SingleBedRoom = 20000;
    const int DoubleBedRoom = 35000;
    const int SuiteRoom = 50000;
    if (choice >= 1 && choice <= 3) {
        cout << "Enter how many rooms you want to reserve: ";
        cin >> Rooms;
        cout << "Enter how many nights you want to reserve: ";
        cin >> nights;
        switch (choice) {
        case 1:
            totalcharges = Rooms * nights * SingleBedRoom;
            break;
        case 2:
            totalcharges = Rooms * nights * DoubleBedRoom;
            break;
        case 3:
            totalcharges = Rooms * nights * SuiteRoom;
            break;
        default:
            cout << "invalid!";
        }
    }
    cout << "Your total charges for room/s booking are " << totalcharges << endl;
}

void displayMenu() {
    cout << "This is the Trendy Menu of Our Hotel:" << endl;
    cout << "1. Biryani / PKR 500 per plate" << endl;
    cout << "2. Nihari / PKR 2500" << endl;
    cout << "3. Chapli Kabab / PKR 1500" << endl;
    cout << "4. Karachi Beef Biryani / PKR 650 per plate" << endl;
    cout << "5. Haleem and fried onions / PKR 400 per serving" << endl;
    cout << "FAST FOODS:" << endl;
    cout << "6. Chicken Burger / PKR 300 per burger" << endl;
    cout << "7. Zinger Burger / PKR 500 per burger" << endl;
    cout << "8. Pizza Slice / PKR 250 per slice" << endl;
    cout << "9. French Fries / PKR 500" << endl;
    cout << "10. White sauce Pasta / PKR 1000" << endl;
}

int main() {
    int menu[10] = { 500,2500,1500,650,400,300,500,250,500,1000 };
    int totalprice, quantity, choice;
    string reservationDate;
    int FoodCharges;

    cout << "Welcome to the Cozy Cottage Hotel!" << endl;
    cout << "Press 1 for table reservation" << endl;
    cout << "Press 2 for room reservation" << endl;
    cout << "Enter your choice: ";
    cin >> choice;

    cout << "Enter the date for reservation (DD/MM/YYYY): ";
    cin >> reservationDate;


    if (choice == 1) {
        tableReservation();
        displayMenu();
        while (true) {
            cout << "Enter your desired menu (0 to finish): ";
            cin >> choice;
            cout << "Enter the quantity:";
            cin >> quantity;

            if (choice == 0) {
                break;
            }
            else if (choice == 1) {
                totalprice += quantity * menu[0];
            }
            else if (choice == 2) {
                totalprice += quantity * menu[1];
            }
            else if (choice == 3) {
                totalprice += quantity * menu[2];
            }
            else if (choice == 4) {
                totalprice += quantity * menu[3];
            }
            else if (choice == 5) {
                totalprice += quantity * menu[4];
            }
            else if (choice == 6) {
                totalprice += quantity * menu[5];
            }
            else if (choice == 7) {
                totalprice += quantity * menu[6];
            }
            else if (choice == 8) {
                totalprice += quantity * menu[7];
            }
            else if (choice == 9) {
                totalprice += quantity * menu[8];
            }
            else if (choice == 10) {
                totalprice += quantity * menu[9];
            }
            else {
                cout << "Invalid choice. Please enter a valid option." << endl;
            }
        }
        cout << "Your total food charges are: PKR " << totalprice << endl;
    }
    else if (choice == 2) {
        roomReservation();
    }
    else {
        cout << "Invalid choice!" << endl;
    }

    return 0;
}