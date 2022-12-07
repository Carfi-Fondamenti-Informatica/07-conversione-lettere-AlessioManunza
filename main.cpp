#include <iostream>
#include "lib.h"
using namespace std ;
int main() {
    int x ;
    cin >> x ;
    char a=x ;
    if (convL(a)) {
        if (a>=65 and a<=90){
            cout << (char)(a+32) << endl;
        }
        else if (a>=97 and a<=122) {
            cout << (char)(a-32) << endl;
        }
    }
    else{
        cout << "errore" << std::endl;
    }
}
