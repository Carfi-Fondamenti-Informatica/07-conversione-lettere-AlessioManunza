#include "lib.h"

int convL (int x , int i) {
    if ((x>=65 and x<=90) or (x>=97 and x<=122)) {
       i=1 ;
    }
    else {
        i=0 ;
    }
    if (i) {
        if (x>=65 and x<=90) {
           x= x+32 ;
        }
        else  if (x>=97 and x<=122) {
            x= x-32 ;
        }
    }
    return x;
}
