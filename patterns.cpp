#include<iostream>
using namespace std;

int main(){

    int n;
    cout << "Enter the number of rows: ";
    cin >> n;

    for (int i = n; i > 0; i--){
        for (int j=1; j <= i/2; j++){
            cout << "  ";
        };
        for (int k=1; k <= n-i+1; k+=2){
            cout << "*";
        };
        for (int l=1; l <= i/2; l++){
            cout << "  ";
        };
        cout << endl;
    };
}