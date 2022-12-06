#include <iostream>
#include "lib.h"
using namespace std;

int main() {
    int x ;
    cin >> x ;
    if (convL(x)) {
        cout << (char)x << endl;
    }
    else{
        cout << "errore" << endl;
    }

}
