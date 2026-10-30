#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

// Function prototype

void getNumbers(int &num1, int &num2);
int calcSum(int num1, int num2);
int calcDifference(int num1, int num2);
int calcProduct(int num1, int num2);
int calcQuotient(int num1, int num2);


int main()
{
    int num1 = 0;
    int num2 = 0;

    char operation;

    //seed once
    srand(time(0));

    num1 = rand() % 50 + 1;
    num2 = rand() % 50 + 1;

    cout << "The first number is: " << num1 << endl;
    cout << "The second number is: " << num2 << endl;

    cout << "Choose an operation symbol (+,-,*,/): " << endl;
    cin >> operation;

    switch(operation)
    {
        case '+':
            cout << "The sum of the number is: " << calcSum(num1, num2) << endl;
            break;
        case '-':
            cout << "The difference of the numbers is: " << calcDifference(num1, num2) << endl;
            break;
        case '*':
            cout << "The product of the numbers is: " << calcProduct(num1, num2) << endl;
            break;
        case '/':
            cout << "The quotient of the numbers is: " << calcQuotient(num1, num2) << endl;
            break;
        default: cout << "Invalid maths operator" << endl;

    }
    return 0;
}

    //Display sum
    int calcSum(int num1, int num2)
{
     return num1 + num2;
}
    //Display difference
    int calcDifference(int num1, int num2)
{
    return num1 - num2;
}

    //Diplay the product
    int calcProduct(int num1, int num2)
{
    return num1 * num2;
}

    //Display the quotient
    int calcQuotient(int num1, int num2)
{
    return num1 / num2;
}
