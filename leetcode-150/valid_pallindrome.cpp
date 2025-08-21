#include<bits/stdc++.h>
using namespace std;


int main(){
    string str = "A man, a plan, a canal: Panama";

    // remove spaces

    class Solution {
public:
    bool isPalindrome(string s) {
        int i=0,j=s.size()-1;
        while(i<j){
            while(i<j && !isalnum(s[i])) i++;
            while(i<j && !isalnum(s[j])) j--;
            
            if(tolower(s[i])!=tolower(s[j])){
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
};

    str.erase(remove(str.begin(), str.end(), ' '), str.end());

    int end = str.length()-1;

    for(int i = 0; i < str.length(); i++){
        if(str[i] == str[end]){
            cout << "Pallindrom" << endl;
        }
        else {
            cout << "Not Pallindrom" << endl;
        }
    }

    cout << str << endl;

    return 0;
}