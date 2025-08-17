#include<bits/stdc++.h>
using namespace std;

int main(){

    vector<int>num = {1,3,4};

    int j = num.size();

    for(int i = 0; i < num.size(); i++){
        if(i == j){
            num[i] = num[i] + 1;
        }

        cout << num[i] << endl;
    }

    return 0;
}