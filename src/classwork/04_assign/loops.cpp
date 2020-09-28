//cpp
#include "loops.h"

int factorial(int num){

    int iter = 1;
    int factorial = 1;

    while(iter <= num){

        factorial = factorial * iter;

        iter ++ ;

    }

    return factorial; 

}