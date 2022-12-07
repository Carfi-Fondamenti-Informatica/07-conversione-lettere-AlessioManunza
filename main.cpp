#include <iostream>
#include "lib.h"
using namespace std ;
int main() {
    char x ;
    cin >> x ;
    if (convL(x)) {
        cout << x << endl;
    }
    else {
        cout << "errore" << endl;
    }
    return 0 ;
}
