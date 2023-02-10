#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    streamsize prec = cout.precision();

    int sum = 0; // 합산 변수 꼭 필요
    double avr = 0.0; 

    int *arr = new int[4]; // 정수입력 받기 위해 1차원 배열
    for (int i = 0; i < 4; i++){ //	2. 로직 설정
        cin >> arr[i];
    sum += arr[i];    
    }    

    avr  = sum / 4.0;

    cout << fixed << "avr : " << setprecision(2) << avr << endl; // fixed를 사용하면 정수여도 소수점을 표기하여 정확하게 나타내준다.
	delete[] arr; // 12번 때문에 객체를 꼭 날려줘야함.

    return 0;
}