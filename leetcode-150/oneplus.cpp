#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> digits = {1,2,3};

    for(int i = digits.size() - 1; i >= 0; i--){
        if(digits[i] + 1 != 10){
            digits[i] += 1;
        }
        digits[i] = 0;
        if(i==0){
            digits.insert(digits.begin(), 1)
        }
    }

    return 0;
}