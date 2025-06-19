// WAP to find an largest number from the array 

#include <iostream>
#include <climits> 
using namespace std;

int main(){
    int num[] = {1, 12, 4, 66, 33};
    int size = 5;
    int largest = INT_MIN;

    for(int i = 0; i < size; i++){
        largest = max(num[i], largest);
    }

    cout << largest;

    return 0;
}