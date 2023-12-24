#include <stdio.h>
#include <ctype.h>

int main() {
    // Déclaration des constantes
    const int TARIF_ENFANT_ABONNE_COURT = 6;
    const int TARIF_ENFANT_NON_ABONNE_COURT = 8;
    const int TARIF_ENFANT_ABONNE_LONG = 10;
    const int TARIF_ENFANT_NON_ABONNE_LONG = 12;
    const int TARIF_ADULTE_ABONNE_COURT = 15;
    const int TARIF_ADULTE_NON_ABONNE_COURT = 18;
    const int TARIF_ADULTE_ABONNE_LONG = 18;
    const int TARIF_ADULTE_NON_ABONNE_LONG = 22;

    // Déclaration des variables
    char typeSpectacle, abonne;
    int age, prix;

    // Partie saisie
    printf("Veuillez saisir le type de spectacle (c pour court, l pour long) : ");
    scanf(" %c", &typeSpectacle);
    typeSpectacle = tolower(typeSpectacle); // Convertir en minuscules

    printf("Veuillez saisir l'âge du spectateur : ");
    scanf("%d", &age);

    printf("Est-ce que le spectateur est abonné (o/n) : ");
    scanf(" %c", &abonne);
    abonne = tolower(abonne); // Convertir en minuscules

    // Calcul et affichage du tarif
    printf("\nTarif du billet : ");

    if (typeSpectacle == 'c') {
        // Spectacle court
        if (age < 18) {
            // Enfant
            prix = (abonne == 'o') ? TARIF_ENFANT_ABONNE_COURT : TARIF_ENFANT_NON_ABONNE_COURT;
        } else {
            // Adulte
            prix = (abonne == 'o') ? TARIF_ADULTE_ABONNE_COURT : TARIF_ADULTE_NON_ABONNE_COURT;
        }
    } else if (typeSpectacle == 'l') {
        // Spectacle long
        if (age < 18) {
            // Enfant
            prix = (abonne == 'o') ? TARIF_ENFANT_ABONNE_LONG : TARIF_ENFANT_NON_ABONNE_LONG;
        } else {
            // Adulte
            prix = (abonne == 'o') ? TARIF_ADULTE_ABONNE_LONG : TARIF_ADULTE_NON_ABONNE_LONG;
        }
    } else {
        // Type de spectacle invalide
        printf("Type de spectacle invalide. Veuillez saisir 'c' ou 'l'.\n");
        return 1; // Code d'erreur
    }

    printf("%d euros\n", prix);

    return 0; // Fin du programme
}

// Tableau du jeu d'essais :
// Type de spectacle : c (court), Age : 12, Abonné : o (oui) => Résultat attendu : 6 euros
// Type de spectacle : l (long), Age : 25, Abonné : n (non) => Résultat attendu : 22 euros
// ... (ajoutez d'autres cas de test avec des commentaires explicatifs)
