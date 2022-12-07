#include <iostream>
#include "lib.h"
using namespace std ;
int main() {
    int x ;
    cin >> x ;
    char a= x ;
    if (convL(a)) {
        cout << a << endl;
    }
    else {
        cout << "errore" << endl;
    }
}
