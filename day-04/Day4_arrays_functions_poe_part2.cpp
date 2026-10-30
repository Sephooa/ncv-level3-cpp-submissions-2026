#include <iostream>

using namespace std;

const int SIZE = 5;

//Function prototypes
void getNumbers(int numbers[], int size);
int countEven(int numbers[], int size);
void displayOdd(int numbers[], int size);
void sortAscending(int numbers[], int size);
void displaySorted(int numbers[], int size);

//Function to enter five numbers
void getNumbers(int numbers[], int size)
{
    for (int x = 0; x < size; x++)
    {
        cout << "Enter number " << x + 1 << ": ";
        cin >> numbers[x];
    }
}

//Function to count and return even numbers
int countEven(int numbers[], int size)
{
    int count = 0;

    for (int x = 0; x < size; x++)
    {
        if (numbers[x] % 2 == 0)
        {
         count ++;
        }
    }

    return count;
}

//Function to display odd numbers only
void displayOdd(int numbers[], int size)
{
    cout << "\nOdd numbers: ";

    for (int x = 0; x < size; x++)
    {
        if (numbers[x] % 2 != 0)
        {
            cout << numbers[x] << " ";
        }
    }

    cout << endl;
}

//Funtion to sort numbers in ascending order
void sortAscending(int numbers[], int size)
{
    for (int x = 0; x < size - 1; x++)
    {
        for (int y = 0; y < size - 1 - x; y ++)
        {
            if (numbers[y] > numbers[x + 1])
            {
                int tempStorage = numbers[y];
                numbers[y] = numbers[y + 1];
                numbers[y + 1] = tempStorage;
            }
        }
    }
}

//Function to display sorted numbers
void displaySorted(int numbers[], int size)
{
    cout << "Sorted numbers: " << endl;

    for (int x = 0; x < size; x++)
    {
        cout << numbers[x] << " ";
    }

    cout << endl;
}

int main()
{
    int numbers[SIZE];

    //Enter five numbers
    getNumbers(numbers, SIZE);

    //Count and display even numbers
    cout << "\nNumber of even numbers: " << countEven(numbers, SIZE) << endl;

    //Display odd numbers
    displayOdd(numbers, SIZE);

    cout << " " << endl;

    //Sort the array in ascending order
    sortAscending(numbers, SIZE);

    //Display the sorted array
    displaySorted(numbers, SIZE);

    return 0;
}
