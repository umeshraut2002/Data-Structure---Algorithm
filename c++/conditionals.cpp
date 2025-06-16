#include <iostream>
using namespace std;

int main(){
    int age = 90;

    if(age >= 18 && age <= 85){
        cout << "You can Drive" << endl;
    }
    else if(age >= 85){
        cout << "You can not drive. You too old to drive" << endl;
    }
    else{
        cout << "You Cam Drive" << endl;
    }

    return 0;

}