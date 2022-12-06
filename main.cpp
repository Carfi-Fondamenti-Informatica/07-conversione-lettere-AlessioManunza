#include <iostream>
#include "lib.h"
using namespace std ;
int main() {
    int x ;
    cin >> x ;
    char a=x ;
    bool y= convL(a) ;
    if (y) {
        cout << a << std::endl;
    }
    else{
        std::cout << "errore" << std::endl;
    }
}
