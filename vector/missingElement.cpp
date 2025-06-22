#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    vector <int> arr = {4, 5, 1, 2};

    int n = arr.size();

    sort(arr.begin(), arr.end());

    for(int i = 0; i < n; i++){
        if(i + 1 != arr[i]){
            cout << i+1 << endl;
            return i + 1;
        }
    }

    return n + 1;
}