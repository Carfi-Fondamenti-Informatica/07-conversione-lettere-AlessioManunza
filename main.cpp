#include <iostream>
#include "lib.h"

int main() {
    int x ;
    std::cin >> x ;
    char a=x ;
    bool y= convL(a) ;
    if (y) {
        std::cout << a << std::endl;
    }
    else{
        std::cout << "errore" << std::endl;
    }

}
