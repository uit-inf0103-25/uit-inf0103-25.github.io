#include <stdio.h>

int main() {
    int arr[] = {-4, 5, 2, 130, -11};
    int* p = arr;
    printf("Nulte element i arr[]: %d\n", *p);
    printf("Nulte element i arr[] med tabellnotasjon: %d\n", p[0]);
    // Flytter pekeren tre int-elementer fram
    int* p_ny = p + 3;
    printf("Tredje element i arr[]: %d\n", *p_ny);
    printf("Tredje element i arr[] med tabellnotasjon: %d\n", p[3]);
    ptrdiff_t p_diff = p_ny - p;
    printf("Differanse i addresse mellom tredje og nulte element: %llu\n", p_diff);
    
    printf("p_ny == &arr[3]: %d\n", p_ny == &arr[3]);
    printf("p_ny > p: %d\n", p_ny > p);
    return 0;
}
