#include <iostream>

int main(){
  int x ;
    cin >> x ;
    x=conVL(x) ;
    bool y=convL(x );
    if (y==true) {
        cout << (char)x << endl;
    }
    else {
        cout << "errore" << endl;
    }
  return 0;
}
