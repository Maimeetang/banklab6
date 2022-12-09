#include<iostream>
using namespace std;

int main(){
    int N = 1;
    int E = 0;
    int O = 0;
    while(N != 0){
        cout << "Enter an integer: ";
        cin >> N;
        if(N != 0){
            if(N % 2 == 0){
               E += 1;
            }else{
               O += 1;
        }
        }
    }
    cout << "#Even numbers = " << E << endl;
    cout << "#Odd numbers = " << O << endl;
    return 0;
}
