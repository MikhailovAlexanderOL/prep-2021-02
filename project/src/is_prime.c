#include <stdbool.h>
#include <is_prime.h>
bool is_prime (int n) {
    if (n>1){
        for (int i=2; i<n; i++){
            if((n % i)==0){
            return 0;
            } else {
                  return 1;
              }
        }
    } else {
          return 0; 
      }
      return 0;
}     
