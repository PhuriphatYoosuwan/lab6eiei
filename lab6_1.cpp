#include<iostream>
using namespace std;

int main(){
    int num;
    int even=0;
    int odd=0;
    cout << "Enter an integer: ";
    cin >> num;
    while(num!=0){
            if(num%2 == 0){
                even++;
                }
            else{
                odd++;
                }
        cout << "Enter an integer: ";
        cin >> num;
    }
    cout << "#Even numbers = " << even <<endl;
    cout << "#Odd numbers = " << odd;
    return 0;
}

