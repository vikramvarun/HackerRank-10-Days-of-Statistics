#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main() 
{
    int den, N, i;
    float num, prob, result=1;
    scanf ("%f %d\n %d", &num, &den, &N);
    prob = num/den;
    for (i=1; i<N; i++) 
    { result = result*(1-prob); }
    result = result *prob;
    printf("%.3f", result);
    return 0;
}
