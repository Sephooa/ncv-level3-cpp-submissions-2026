#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    double avg1 = (70 + 85 + 90) / 3;
    double avg2 = (70 + 85 + 90) / 3.0;

    int total = 245, tests = 3;

    double avg3 = static_cast<double>(total) / tests;
    double avg4 = static_cast<double>(total / tests);

    int whole = 9.99;

    cout << fixed << setprecision(1) << endl;
    cout << "Average 1:    " << avg1 << endl;
    cout << "Average 2:    " << avg2 << endl;
    cout << "Average 3:    " << avg3 << endl;
    cout << "Average 4:    " << avg4 << endl;
    cout << "Whole number: " << whole << endl;

    return 0;
}
