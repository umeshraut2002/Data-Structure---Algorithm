#include <iostream>
using namespace std;

int main(){
    int num = 1455;
    int digitSum = 0;

    while(num > 0){
        int lastDigit = num % 10;
        num = num / 10;

        digitSum += lastDigit;
    }

    cout << digitSum << endl;

    return 0;
}