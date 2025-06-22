#include <iostream>
using namespace std;

int main(){
    int arr = [4, 5, 1, 2];

    int n = arr.size();

    sort(arr.begin(), arr.end());

    for(int i = 0; i < n; i++){
        if(i + 1 != arr[i]){
            return i+1;
        }
    }

    return n + 1;
}