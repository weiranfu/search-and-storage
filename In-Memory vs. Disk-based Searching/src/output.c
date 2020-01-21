#include <stdio.h>
#include <sys/time.h>
#include "output.h"
#include "Array.h"


void print_output(const Array* seek, const Array* hit, struct timeval exec) {
    int i;
    for (i = 0; i < seek->size; ++i) {
        if (hit->array[i] == 1) {
            printf( "%12d: Yes\n", seek->array[i]);
        } else {
            printf( "%12d: No\n", seek->array[i]);
        }
    }
    printf("Time: %ld.%06ld\n", (long) exec.tv_sec, (long) exec.tv_usec);
}
