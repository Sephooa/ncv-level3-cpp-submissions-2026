// Made with Blocks to C++
#include <iostream>
#include <string>

using namespace std;

int main() {
    string name = "";
    cout << "What is your name?" << endl;
    getline(cin >> ws, name);
    string Gender = "";
    cout << "Enter your gender (M for Male, F for Female):" << endl;
    getline(cin >> ws, Gender);
    cout << "Hello, " << name << endl;
    if (Gender == "M" || Gender == "m") {
        cout << "you are a clever gentleman" << endl;
    }
    else if (Gender == "F" || Gender == "f") {
            cout << "you are a beautiful lady" << endl;

    } else {cout << "Invalid gender entered. Please enter M for male or F for Female" << endl;
    }

    return 0;
}
