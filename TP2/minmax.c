#include <stdio.h>
#include <stdlib.h>

int maximum(int *t, int n) {
    int max = t[0];
    for (int i = 1; i < n; i++) {
        if (t[i]>max) {
            max = t[i];
        }
    }
    return max;
}

void f(int a, int b, int *s, int *p) {
    *s = a + b; 
    *p = a * b; 
}

void minmax(int *t, int n, int *pmin, int *pmax){
    *pmin = t[0];
    *pmax = t[0];
    int i;
    for(i = 1; i<n; i++){
        if(t[i]>*pmax){
            *pmax = t[i];
        }
        if(t[i]<*pmin){
            *pmin = t[i];
        }
    }
}

int main () {
    int tab[10] = {1,5,3,7,0,6,3,7,1,12};
    int max1 = maximum(tab, 10);
    printf("Max = %i", max1);
    int x, y;
    f(12, 4, &x, &y);
    printf("x = %i, y = %i\n", x, y);
    int min , max;
    minmax(tab, 10, &min, &max);
    printf("Min = %i, Max = %i\n", min, max);
}