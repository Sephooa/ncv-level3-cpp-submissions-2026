#include <iostream>
using namespace std;


int main(){

    //Declare variables
    int number;
    int sum = 0;
    double average = 0;
    int count;

    //Enter the values
    for (count = 1; count <=5; count ++)
    {
        // Prompt and get values
        cout << "Enter your number " <<  count << ": ";
        cin >> number;

        if (number > 0 && number <= 50)
        {
            // Accumulate
            sum += number;
        }
        else
        {
            cout << "Invalid number try again: !!!\n";
            count --;
        }

    }

            average = sum / (count - 1);

        cout << "The sum of the numbers is: " << sum << endl;

        cout << "The average of the numbers is: " << average;

   return 0;
}
