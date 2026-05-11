/*overload +, <=,<<*/
#include<iostream>
using namespace std;

class time {
    int hr, miin, sec;
public:
    void getdata() {
        cout << "Enter hr, min, and sec: ";
        cin >> hr >> miin >> sec;
    }

    // Overloading + operator
    time operator +(time a) {
        time sum;
        int secs = (hr + a.hr) * 3600 + (miin + a.miin) * 60 + sec + a.sec;
        sum.hr = secs / 3600;
        sum.miin = (secs % 3600) / 60;
        sum.sec = (secs % 3600) % 60;
        return sum;
    }

    // Overloading <= operator
    bool operator <=(time a) {
        int t1 = hr * 3600 + miin * 60 + sec;
        int t2 = a.hr * 3600 + a.miin * 60 + a.sec;
        return t1 <= t2;
    }

    // Overloading << operator
    friend ostream& operator<<(ostream& out, const time& t) {
        out << t.hr << ":"
            << t.miin << ":"
            << t.sec;
        return out;
    }
};

int main() {
    time t1, t2, t3;
    t1.getdata();
    t2.getdata();
    t3 = t1 + t2;
    cout << "Sum of time is " << t3 << endl;

    if (t1 <= t2)
        cout << "The least time is " << t1 << endl;
    else
        cout << "The least time is " << t2 << endl;

    return 0;
}
