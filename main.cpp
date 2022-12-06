#include <iostream>
#include "lib.h"
int main() {
    int x , y;
    std::cin >> x ;
    if (convL(x,y)){
        std::cout << (char)y << std::endl;
    }
    else {
        std::cout << "errore" << std::endl;
    }
    return 0;
}
