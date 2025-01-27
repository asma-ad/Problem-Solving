#include <iostream>
using namespace std;
/*
Write a program to sum even numbers from 1 to N.
*/
enum enOddEven
{
    Odd = 1,
    Even = 2
};

int readNumber()
{
    int number;
    do
    {
        cout << "Enter a number: ";
        cin >> number;
    } while (number < 0);
    return number;
}

enOddEven checkOdd_Even(int number)
{
    if (number % 2 != 0)
        return enOddEven::Odd;
    else
        return enOddEven::Even;
}

int sumNumbers(int N)
{
    int sum = 0;
    for (int i = 1; i <= N; i++)
    {
        if (checkOdd_Even(i) == enOddEven::Even)
            sum += i;
    }
    return sum;
}

void printResult(int sum)
{
    cout << sum << endl;
}

int main()
{
    printResult(sumNumbers(readNumber()));
    return 0;
}