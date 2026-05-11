#include<iostream>
#include<string.h>
using namespace std;
class check {
public:
    int code;
    char desc[50];
    check(int c, const char* message) {
        code = c;
        strcpy(desc, message);
    }
    void displayError() const {
        cout << "Error [" << code << "]: " << desc << endl;
    }
};
class Time {
    int hr, mins, sec;

public:
    Time()
    {
        hr=0;mins=0;sec=0;
    }
    // Method to read and validate time, with exception specification
    void readtime(int h, int m, int s) throw(check);
    // Method to display time, marked as noexcept
    void display() const noexcept {
        cout << "The time is " << hr << ":" << mins << ":" << sec << endl;
    }
};
void Time::readtime(int h, int m, int s) throw(check) {
    if (h < 0 || h > 23) {
        throw check(101, "Invalid Hour (0-23)");  // Throw an exception with an argument
    } else if (m < 0 || m > 59) {
        throw check(102, "Invalid Minute (0-59)");  // Throw an exception with an argument
    } else if (s < 0 || s > 59) {
        throw check(103, "Invalid Second (0-59)");  // Throw an exception with an argument
    } else {
        hr = h;
        mins = m;
        sec = s;
    }
}
int main() {
    Time t1;

    try {
        t1.readtime(25, 61, 90);
    }
    catch (const check &e) {
        // Catch and display the exception with arguments
        cout << "Exception while reading time: " << endl;
        e.displayError();
    }
    t1.display();

    return 0;
}

