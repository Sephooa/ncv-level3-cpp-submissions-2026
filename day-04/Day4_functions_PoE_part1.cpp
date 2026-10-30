#include <iostream>
using namespace std;

// Function prototype

void getNumbers(int &num1, int &num2);
void displaySum(int num1, int num2);
void displayDifference(int num1, int num2);
void displayProduct(int num1, int num2);
void displayQuotient(int num1, int num2);


int main()
{
    int num1 = 0;
    int num2 = 0;

    getNumbers(num1, num2);
    displaySum(num1, num2);
    displayDifference(num1, num2);
    displayProduct(num1, num2);
    displayQuotient(num1, num2);

    return 0;
}

    //Input function

    void getNumbers(int &num1, int &num2)
{
    cout << "Enter first number : " << endl;
    cin >> num1;
    cout << "Enter second number : " << endl;
    cin >> num2;
}
    //Display sum
    void displaySum(int num1, int num2)
{
    cout << "The sum of the numbers is: " << num1 + num2 << endl;
}
    //Display difference
    void displayDifference(int num1, int num2)
{
    cout << "The difference of the numbers is: " << num1 - num2 << endl;
}

    //Diplay the product
    void displayProduct(int num1, int num2)
{
    cout << "The product of the numbers is: " << num1 * num2 << endl;
}

    //Display the quotient
    void displayQuotient(int num1, int num2)
{
    cout << "The quotient of the numbers is: " << num1 / num2 << endl;
}
