#include <stdio.h>

struct Personne {
	char *nom;
	int age;
	float taille;
};

struct Famille {
	char *nom;
	struct Personne pere;
	struct Personne mere;
	int nb_enfants;
	struct Personne *enfants;
};

int agetotal(struct Famille famille){
	int res = famille.pere.age + famille.mere.age;
	for(int i =0; i<famille.nb_enfants; i++){
		res = res + famille.enfants[i].age;
	}
	return res;
}

int main(){
	struct Famille famille;
	printf("La taille d'une famille est de: %i octets.\n", sizeof(famille));
	struct Personne pere;
	pere.age = 50;
	struct Personne mere;
	mere.age = 48;
	struct Personne enfant1;
	enfant1.age = 15;
	struct Personne enfant2;
	enfant2.age = 20;
	struct Personne enfants[] = {enfant1, enfant2};
	famille.nom = "toto";
	famille.pere = pere;
	famille.mere = mere;
	famille.nb_enfants = 2;
	famille.enfants = enfants;
	printf("L'age total de la famille est de: %i ans.\n", agetotal(famille));
}
