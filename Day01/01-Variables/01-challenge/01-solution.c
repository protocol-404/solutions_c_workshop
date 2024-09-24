#include <stdio.h>

int main() {
    // Variables
    char nom[50];
    char prénom[50];
    int âge;
    char sexe;
    char adresse_email[100];

    // last name
    printf("Entrez votre nom de famille: ");
    scanf("%s", nom);

    // first name
    printf("Entrez votre prénom: ");
    scanf("%s", prénom);

    // age
    printf("Entrez votre âge:");
    scanf("%d", &âge);

    // gender
    printf("Entrez votre sexe (H/F) :");
    scanf(" %c", &sexe);  

    // email address
    printf("Entrez votre adresse e-mail:");
    scanf("%s", adresse_email);


    // Print informations
    printf("=======================================================================================================\n");
    printf("||=> Bonjour %s %s, votre âge est %d, votre sexe est %c, et votre adresse e-mail est %s. <=||\n", nom, prénom, âge, sexe, adresse_email);
    printf("=======================================================================================================\n");

    return 0;
}