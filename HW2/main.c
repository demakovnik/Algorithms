#include <stdio.h>
#include <math.h>
#include <inttypes.h>


_Bool isPrime(unsigned long N);
uint32_t summa(uint32_t limit);

int main() {
    for (int i = 2; i < 200; i++) {
        printf("%d is %s\n", i, isPrime((unsigned) i) ? "prime" : "not prime");
    }

    printf("%"PRIu32"\n", summa(3));
    return 0;
}

_Bool isPrime(unsigned long N) {
    for (unsigned long i = 2; i <= sqrt(N); i++) {
        if (N % i == 0) {
            return 0;
        }
    }
    return 1;
}

uint32_t summa(uint32_t limit) {
    uint32_t step = limit, sum = 0;
    while (step) {
        sum += step--;
    }
    return sum;
}
