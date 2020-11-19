#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
    int num, i, j;
    cin >> num;
    for (i=1;i<=num;i++){
        for (j=1;j<=i;j++){
            cout << "*";
        }
        cout << "\n";
    }
    for (i=num-1;i>0;i--){
        for (j=i;j>0;j--){
            cout << "*";
        }
        cout << "\n";
    }
    return 0;
}