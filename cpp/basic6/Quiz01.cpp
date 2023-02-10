#include <iostream>
using namespace std;

int main() {
    
    int numbers[5] = {7, 5, 6, 12, 35};

    cout << "홀수 요소 : " ;
    for (int i = 0; i < 5; ++i) {
        if(numbers[i]%2==1){
        cout << numbers[i] << "  ";
        }
    }
    cout << endl;
    
    cout << "홀수 기수 : " ;
    for (int i = 1; i < 5; i+=2){
        cout << numbers[i] << "  ";
    }
    cout << endl;

  return 0;
}