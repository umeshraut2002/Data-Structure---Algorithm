#include<bits/stdc++.h>
using namespace std;

int main(){

    vector<int> num = {1,2,3,4,5,6,7};
    int k = 3;

    k = k % num.size();

    reverse(num.begin(), num.end());
    reverse(num.begin(), num.begin() + k);
    reverse(num.begin() + k, num.end());

    for(int i = 0; i < num.size(); i++){
        cout << num[i] << endl;
    }

    return 0;
}