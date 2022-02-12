#include <stdio.h>
#include <stdlib.h>

int* copie(int *tab, int n) {
    int *p = malloc(sizeof(int) * n);
    for (int i = 0; i < n; i++) {
        p[i] = tab[i];
    }
    return p; 
}

int* unsurdeux(int *tab, int n){
    int *p = malloc(sizeof(int) * n/2);
    int j=0;
    for(int i = 0; i<n - 1; i = i + 2){
        p[j] = tab[i];
        j++;
    }
    return p;
}

void toString(int *tab, int n){
    printf("| ");
    for(int i=0; i<n; i++){
        printf("%i | ", tab[i]);
    }
}

int main (){
    int tab[] = {1,2,3,4,5,6,7,8,9,10};
    toString(tab, 10);
    printf("\n");
    int *tab_bis = copie(tab, 10);
    toString(tab_bis, 10);
    printf("\n");
    int *tabUnSurDeux = unsurdeux(tab, 10);
    toString(tabUnSurDeux, 5);
    printf("\n");
}