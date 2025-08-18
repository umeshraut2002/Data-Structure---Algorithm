#include<bits/stdc++.h>
using namespace std;

int hindex(vector<int>& citations){

    sort(citations.begin(), citations.end());

    int ans = citations.size(); // 5

    for(int i = 0; i <= citations.size(); i++){

        if(citations[i] >= ans){
            return ans;
        }

        ans--;
    }

    return ans;
}

int main(){
    vector<int> citations = {3, 0, 1, 5, 6};

    int ans = hindex(citations);

    cout << ans << endl;

    return 0;
}