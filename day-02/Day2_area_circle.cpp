#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    const double PI = 3.141592653589793;
    double radius, area;

    cout << "Enter the radius of the circle: ";
    cin >> radius;

    area = PI * pow(radius, 2);

    cout << fixed << setprecision(2);
    cout << "Area of the circle: " << area << " square units" << endl;

    return 0;
}
