#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    // Declare variables
    string name;
    char genderCode;
    string description;

    //Prompt and get values
    cout << "Enter your name: ";
    cin >> name;

    cout << "Enter a gender code M for male or F for male: ";
    cin >> genderCode;

    //Make a decision using switch

    switch (genderCode){
        case 'M':
        case 'm':
        description = " you are a clever gentleman";
        cout << name << description;
        break;

        case 'F':
        case 'f':
        description = " you are a beautiful lady";
        cout << name << description;
        break;

        default:
        description = " please enter your gender as either M for male or F for female";
        cout << name << description;
    }

    return 0;
}

