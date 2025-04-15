#include <iostream>
using namespace std;

class MovieTicket {
    string movieName;
    int seatNumber;
    float price;
    bool isBooked;

public:
    MovieTicket(string name, int seat, float p) {
        movieName = name;
        seatNumber = seat;
        price = p;
        isBooked = false;
    }

    void bookTicket() {
        if (!isBooked) {
            isBooked = true;
            cout << "Seat " << seatNumber << " booked for " << movieName << endl;
        } else {
            cout << "Seat " << seatNumber << " is already booked." << endl;
        }
    }

    void cancelTicket() {
        if (isBooked) {
            isBooked = false;
            cout << "Booking for seat " << seatNumber << " cancelled." << endl;
        } else {
            cout << "Seat " << seatNumber << " was not booked." << endl;
        }
    }

    void displayTicketDetails() {
        cout << "Movie: " << movieName << "\nSeat: " << seatNumber 
             << "\nPrice: $" << price 
             << "\nStatus: " << (isBooked ? "Booked" : "Available") << endl << endl;
    }

    ~MovieTicket() {
        cout << "Destructor called for seat " << seatNumber << endl;
    }
};

int main() {
    MovieTicket t1("Inception", 10, 250);
    MovieTicket t2("Interstellar", 11, 300);

    t1.displayTicketDetails();
    t1.bookTicket();
    t1.displayTicketDetails();
    t1.cancelTicket();
    t1.displayTicketDetails();

    t2.bookTicket();

    return 0;
}
