#include "lib.h"

bool convL(char &a) {
    (int) a ;
    if (a>=0 and a<=255) {
        if (a>=65 and a<=90) {
            a = (char) (a + 32);
        }
        else if (a>=97 and a<=122) {
            a=(char)(a-32);
        }
        return true ;
    }
    else {
       return false ;
   }
}
