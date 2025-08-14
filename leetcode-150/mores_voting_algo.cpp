#include<bits/stdc++.h>
using namespace std;

int main(){

    vector<int>num = {1,2,1,2,1,1};
    int freq = 0;
    int ans = 0;

    for(int i < 0; i < num.size(); i++){
        if(freq == 0){
            ans = num[i];
        }
        else if(ans == num[i]){
            freq++;
        }
        else{
            freq--;
        }
    }

    cout << ans << endl;

    return 0;
}