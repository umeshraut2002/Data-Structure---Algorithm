// WAP to find an largest number from the array 

#include <iostream>
#include <climits> 
using namespace std;

int main(){
    int num[] = {1, 12, 4, 66, 33};
    int size = 5;
    int largest = INT_MIN;
    int smallest = INT_MAX;

    for(int i = 0; i < size; i++){
        largest = max(num[i], largest);
        smallest = min(num[i], smallest);
    }

    cout << "Largest Number Is: " << largest << endl;
    cout << "Smallest Number Is: " << smallest << endl;

    return 0;
}