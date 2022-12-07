#include "lib.h"

bool convL(char &a) {
    if ((a>=65 and a<=90) or (a>=97 and a<=122)) {
        if (a>=65 and a<=90) {
            a+=32 ;
        }
        else {
            a-=32 ;
        }
        return 1 ;
    }
    else {
        return 0;
    }
}
