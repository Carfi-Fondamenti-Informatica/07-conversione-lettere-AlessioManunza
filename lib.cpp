#include "lib.h"

bool convL(char &a) {
    (int)a ;
    if (a>=65 and a<=90) {
        (char)(a+32) ;
        return true ;
    }
    else if (a>=97 and a<=122) {
        (char)(a-32) ;
        return true ;
    }
    else {
       return false ;
   }
}
