#include <stdio.h>

int main() {
    int i, j;
    float k, l;
    scanf("%d %d", &i, &j);
    scanf("%f %f", &k, &l);
    printf("%d %d\n%.1f %.1f", (i+j), (i-j), (k+l), (k-l));
    return 0;
}
