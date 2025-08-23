#include<bits/stdc++.h>
using namespace std;

void selection_sort(int num[], int n){
    for(int i = 0; i <= n-2; i++){
        int mini = i;
        for(int j = i; j<=n-1; j++){
            if(num[j] < num[mini]){
                mini = j;
            }
        }

        int temp = num[mini];
        num[mini] = num[i];
        num[i] = temp;

    }
}

void print_Selection_Sort(int num[], int n){

    selection_sort(num, n);

    for(int i = 0; i < n; i++){
        cout << num[i] << endl;
    }
}

int main(){
    int n = 6;
    int num[] = {9, 46, 24, 52, 20, 13};

    selection_sort(num, n);
    print_Selection_Sort(num,n);

    return 0;
}