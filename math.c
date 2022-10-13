
#include <stdio.h>
#include "math.h"
    /*Funciones matematicas para nuestro codigo*/

int doubleInt(int a){
    if( a>MAX_INT ){
        return -1;
    }
    return a*2;
}
double doubleDouble(double a){
    if( a>MAX_DOUBLE ){
        return -1;
    }
    return a*2;
}