#include "lib.h"

bool convL(int &a) {
    bool i=0 ;
    if ((a>=65 and a<=90) or (a>=97 and a<=122)) {
        i==1 ;
        if ( (i=1) and (a>=65 and a<=90)) {
            a += 32;
        }
        else if ((i=1) and (a>=97 and a<=122)) {
            a-=32 ;
        }
        return true ;
    }
    else {
       return false ;
   }
}
