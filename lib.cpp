#include <iostream>
#include "lib.h"

bool convL(int a , int &b) {
    if (a>=65 and a<=90) {
        b=a+32 ;
    }
    if (a>=97 and a<=122){
        b=a-32 ;
    }
    if ((a>=65 and a<=90) or (a>=97 and a<=122)) {
        return true ;
    }
    else {
        return false ;
    }
}
