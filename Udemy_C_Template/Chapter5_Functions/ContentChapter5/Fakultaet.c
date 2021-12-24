#include <stdio.h>
#include <stdint.h>


uint64_t fact(uint8_t number){
    if(number == 1){
        return 1;
    }
    else{
        return (number * fact(number - 1));
    }
}

int main(){


    uint8_t n = 10;
    uint64_t n_fact = fact(n);
    printf("Die Fakultät ist: %llu",n_fact);

    return 0;
}
