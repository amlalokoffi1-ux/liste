#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void chiffrement(char texte[])
{
    // Déclaration et initialisation de la boucle pour parcourir le tableau [1]
    for (int i = 0; i < strlen(texte); i++) {

        // Gestion des minuscules : vérifie si le caractère est entre 'a' et 'z' [3]
        if (texte[i] >= 'a' && texte[i] <= 'z') {
            // Application du décalage avec le modulo 26 pour rester dans l'alphabet [4]
            texte[i] = 'a' + (texte[i] - 'a' + 23) % 26;
        }

        // Gestion des majuscules : le principe est identique [4]
        else if (texte[i] >= 'A' && texte[i] <= 'Z') {
            texte[i] = 'A' + (texte[i] - 'A' + 23) % 26;
        }
    }
}
void dechiffrement(char texte[])
{
    // Déclaration et initialisation de la boucle pour parcourir le tableau [1]
    for (int i = 0; i < strlen(texte); i++) {

        // Gestion des minuscules : vérifie si le caractère est entre 'a' et 'z' [3]
        if (texte[i] >= 'a' && texte[i] <= 'z') {
            // Application du décalage avec le modulo 26 pour rester dans l'alphabet [4]
            texte[i] = 'a' + (texte[i] - 'a' +3) % 26;
        }

        // Gestion des majuscules : le principe est identique [4]
        else if (texte[i] >= 'A' && texte[i] <= 'Z') {
            texte[i] = 'A' + (texte[i] - 'A' +3) % 26;
        }
    }
}

int main()
{
    char texte[100];
    int choix;
    printf("****************menu***************\n entrer le texte ");
    scanf( "%s",texte);
    do{
    printf("faire un choix\n 1 cryptage \n 2 decryptage\n");
    scanf("%d",&choix);
    } while ((choix != 1 )&& (choix != 2 ));
    switch(choix)
    {
        case 1:
            chiffrement(texte);
    printf(" en wina vous avez ecrit %s", texte);
    break;
    case 2 : dechiffrement(texte);
     printf(" en franais vous avez ecrit %s", texte);
     break;

    }

    return 0;
}
