#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int main() {
    // 1. Declare variables
    int a, b;
    float c, d;
    
    // 2. Read the two integers
    scanf("%d %d", &a, &b);
    
    // 3. Read the two floats
    scanf("%f %f", &c, &d);
    
    // 4. Calculate and print integer sum and difference (separated by a space)
    printf("%d %d\n", a + b, a - b);
    
    // 5. Calculate and print float sum and difference (rounded to 1 decimal place)
    printf("%.1f %.1f\n", c + d, c - d);
    
    return 0;
}
