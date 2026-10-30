
#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>

using namespace std;

// Function to generate a random number from 1 to maximum
int random(int maximum)
{
    return 1 + rand() % maximum;
}

int main()
{
    // Initialise the random number generator
    srand(static_cast<unsigned>(time(nullptr)));

    // Declare variables
    int secret = random(20);
    int guess = 0;
    int tries = 0;

    // Welcome message
    cout << "I am thinking of a number from 1 to 20."
         << endl;

    // Repeat until the correct number is guessed
    do
    {
        cout << "Guess a number from 1 to 20: " << endl;
        cin >> guess;

        // Count each guess
        tries++;

        // Check the guess
        if (guess == secret)
        {
            cout << "Correct!" << endl;
        }
        else if (abs(guess - secret) <= 3)
        {
            cout << "Hot!" << endl;
        }
        else
        {
            cout << "Cold." << endl;
        }

    } while (guess != secret);

    // Display the total number of tries
    cout << "Number of tries: " << tries << endl;

    return 0;
}
