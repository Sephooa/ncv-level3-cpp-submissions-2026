#include <iostream>
#include <iomanip>
using namespace std;

int main(){

    // Declare variables
    int number;
    int sum = 0;
    int average = 0;
    int count = 1;

    {
        // Prompt and get values
        sum = 0;
        //Part 1 initialize
        cout << "Enter number " <<  count << " or -1 to terminate: ";
        cin >> number;

        //Part 2 Condition
        while (number !=- 1)
        {
           // cout << number << endl;
            count ++;
            sum = sum + number;

            //Part 3: Update (reprompt)
            cout << "Enter number " << count << " or -1 to terminate: ";
            cin >> number;
        }
        cout << fixed << setprecision(2);
        average = sum / (count - 1);

        cout << "The sum of the numbers is: " << sum << endl;

        cout << "The average of the numbers is: " << average << endl;

        cout << "You entered " << count - 1 << " numbers";
    }
   return 0;

}
