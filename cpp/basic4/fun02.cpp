#include <iostream> // Example 2: Function with Parameters program to print a text
using namespace std;
/*
void displayNum(int n1, float n2) { // display a number
    cout << "The int number is " << n1;
    cout << "The double number is " << n2;
}
int main() 
{
    int num1 = 5;
    double num2 = 5.5;
    displayNum(num1, num2);     // calling the function 17에서 7로 복사
    return 0;
} */

int displayNum(int n1, float n2) { 
    cout << "The int number is " << n1 << endl;
    cout << "The double number is " << n2 << endl;
    return 500;
}

int main() 
{
    int num1 = 5;
    double num2 = 5.5;

    int value = displayNum(num1, num2);     // 21과 같은 유형이여야 함.
    cout << value << endl;
    return 0;
}