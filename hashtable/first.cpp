#include<bits/stdc++.h>
using namespace std;

int main(){

    vector<int> num = {1,2,3,4,1,1,2,3};
    int val = 1;
    int count = 0;

    for(int i = 0; i < num.size(); i++){
        if(num[i] == val){
            count++;
        }
    }

    cout << count << endl;

    return 0;
}