
#include <stdio.h>
#include "math.h"
    /*Funciones matematicas para nuestro codigo*/

int doubleInt(int a){
    if( a>MAX_INT ){
        return -1;
    }
    return a*2;
}