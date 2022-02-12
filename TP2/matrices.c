#include <stdio.h>
#include <stdlib.h>

struct Matrice {
    int nb_lignes;
    int nb_colonnes;
    int **valeurs;
};

void affiche(struct Matrice m){
    for(int i=0; i<m.nb_lignes; i++){
        printf("| ");
        for(int j=0; j<m.nb_colonnes; j++){
            printf("%i | ", m.valeurs[i][j]);
        }
        printf("\n");
    }
}

int main(){
    int ligne1[3]={1,2,3};
    int ligne2[3]={4,5,6};
    int ligne3[3]={7,8,9};
    int *c[3]={ligne1,ligne2,ligne3};
    struct Matrice mat1 = {
        .nb_lignes = 3,
        .nb_colonnes = 3,
        .valeurs = c,
    };
    affiche(mat1);
}