#include "stdio.h"
#include "utils.h"

size_t timer_from(int from) {
    size_t counter = 0;
    for ( int i = from ; i >= 0 ; --i ) {
        ++counter;
        if (i == 0) {
        printf("%d\n", i);
        } else {
        printf("%d ", i);
        }
    }
    return counter;
}


int custom_pow(int base, int power)
{   int x = base;
    if (power == 0) {
    x = 1;
    } else {
    for ( int i = 1 ; i < power ; i++ ) {
    x = base*x;
    }
    }
    return x;
}

