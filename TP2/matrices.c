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

struct Matrice matrice(int nbl, int nbc, int *valeurs){
    int **val = malloc(sizeof(int*)*nbl);
    for(int i=0; i<nbl; i++){
        int *t = malloc(sizeof(int)*nbc);
        for(int j=0; j<nbc; j++){
            t[j]=valeurs[j+nbl*i];
            val[i]=t;
        }
    }
    struct Matrice mat;
    mat.nb_colonnes = nbl;
    mat.nb_lignes = nbc;
    mat.valeurs = val;
    return mat;
}

void efface(struct Matrice mat){
    free(mat.valeurs);
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
    printf("\n");
    int v1[12] = {
        1, 2, 3, 4,
        2, 4, 6, 8,
        3, 6, 9, 12,
    };
    struct Matrice m1 = matrice(3, 4, v1);
    affiche(m1);
}