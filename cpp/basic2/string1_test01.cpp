#include <iostream>
#include <string>

using namespace std;

int main() {
    string name;
    int year = 0;
    int age = 0;

    cout << "name : ";
    cin >> name;
    cout << "year : ";
    cin >> year;

    age = 2023 - year;
    cout << "age :  " << age << "세" << endl; 
    return 0;
}