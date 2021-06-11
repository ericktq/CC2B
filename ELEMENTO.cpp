#include "ELEMENTO.h"

ELEMENTO::ELEMENTO(){
    Num = 0;
}
ELEMENTO::ELEMENTO(int num){
    Num = num;
}
string ELEMENTO::toString(){
    stringstream s;
    s<<Num<<"  ";
    return s.str();
}
ostream& operator<<(ostream &salida, ELEMENTO&elem){
    return salida<<elem.toString();
}
ELEMENTO::~ELEMENTO(){
}

