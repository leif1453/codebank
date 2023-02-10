#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    streamsize prec = cout.precision();
    int sum = 0; 
    double avr = 0.0; 

    int *arr = new int[3]; 
    for (int i = 0; i < 3; i++){ //	2. 로직 설정
        cin >> arr[i];
    sum += arr[i];    
    }    

    avr  = sum / 3.0;

    cout << fixed << "평균 : " << setprecision(2) << avr << endl; 
	delete[] arr; 

    return 0;
}