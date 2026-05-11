/*Define a class description for such counter. Provide the ability to set the maximum and
minimum values, to increment the counter and to return the current counter value. Now
implement the class in your own program. Illustrate the use of pointers and DMA in
this example.*/
/*counter*/
#include<iostream>
using namespace std;
class Counter
{
    int maxi,mini;
    int* current;
public:
    Counter(int m1,int m2):maxi(m2),mini(m1)
    {
        current = new int(mini);
    }
    ~Counter() {
        delete current;
    }
    void increase()
    {
        if (*current < maxi)
        {
            (*current)++;
        }
        else
        {
            *current = mini;
        }
    }
    int getValue() const
    {
        return *current;
    }
};
int main()
{
    int minVal, maxVal;
    cout << "Enter the minimum value of the counter: ";
    cin >> minVal;
    cout << "Enter the maximum value of the counter: ";
    cin >> maxVal;

    // Create a DigitalCounter object using pointers and DMA
    Counter* c1 = new Counter(minVal, maxVal);
    cout << "Initial counter value: " << c1->getValue()<<endl;
    for (int i = 0; i < 15; ++i) {
        c1->increase();
        cout << "Counter value after "<<i+1<<" th increment: "<< c1->getValue()<<endl;
    }
    delete c1;
    return 0;
}
