#include "library.h"
#include <stdio.h>
#include <string.h>

int IO_c(double input_valore, string output_richiesta)
{
    printf("%s\n", output_richiesta);
    scanf("%lf\n", input_valore);
    return 0;
}


