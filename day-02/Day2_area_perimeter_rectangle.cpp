#include<iostream>
using namespace std;

int main(){

    int length, width, area, perimeter;

    cout << "Please enter length in meters:\n";
    cin >> length;

    cout << "Please enter width in meters:\n";
    cin >> width;

    area = length * width;
    perimeter = length + length + width + width;

    cout << "Area is: " <<  area << "m2" << "\n",
    cout << "Perimiter is: " <<  perimeter << "m" << "\n";

    return 0;

}
