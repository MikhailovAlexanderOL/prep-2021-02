#include <stdio.h>
#include <is_rekursia.h>
int is_rekursia(int n) {
    if (n == 1) {
     printf("%d", n);
    return n;
    }
    if (n <= 0) {
        printf(" %d", is_rekursia(n+1) -1);
        return n;
    } else {
        printf(" %d", is_rekursia(n-1) +1);
        return n;
    }
    return 1;
}
