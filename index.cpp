#include <iostream>
#include <cstdlib>  // Pour la fonction rand()
#include <ctime>    // Pour la fonction time()

using namespace std;

const int LONGUEUR_MOT_DE_PASSE = 8;  // Longueur désirée pour les mots de passe
const string CARACTERES_VALIDES = "0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";  // Caractères autorisés dans les mots de passe

// Génère un mot de passe aléatoire de longueur LONGUEUR_MOT_DE_PASSE
// en utilisant les caractères contenus dans CARACTERES_VALIDES
string genererMotDePasse()
{
    string motDePasse = "";

    // On utilise la fonction rand() pour générer des nombres aléatoires
    // On initialise le générateur de nombres aléatoires en utilisant l'horloge du système
    // (la fonction time() retourne le nombre de secondes écoulées depuis le 1er janvier 1970)
    srand(time(NULL));

    // On génère les caractères du mot de passe un par un
    for (int i = 0; i < LONGUEUR_MOT_DE_PASSE; i++)
    {
        // On génère un nombre aléatoire compris entre 0 et la taille de CARACTERES_VALIDES - 1
        int index = rand() % CARACTERES_VALIDES.size();

        // On ajoute le caractère correspondant à l'index choisi dans motDePasse
        motDePasse += CARACTERES_VALIDES[index];
    }

    return motDePasse;
}

int main()
{
    cout << "Voici un mot de passe aléatoire : " << genererMotDePasse() << endl;

    return 0;
}
