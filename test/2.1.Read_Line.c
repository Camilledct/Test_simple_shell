#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prototype du programme
 * Description : Ce programme affiche un invite "$ ", lit une ligne d'entrée utilisateur,
 * puis l'affiche. Utilise getline pour lire la ligne.
 * Return: Toujours 0.
 */
int main(void)
{
	char *buffer = NULL; // Initialise buffer à NULL pour getline
	size_t len = 0;      // Taille initiale définie comme 0 (getline ajustera)

	while (1)
	{
		printf("$ "); // Affiche l'invite utilisateur
		if (getline(&buffer, &len, stdin) == -1) // Vérifie si getline échoue
		{
			perror("Erreur de lecture");
			free(buffer); // Libère la mémoire si erreur
			exit(EXIT_FAILURE);
		}
		printf("%s", buffer); // Affiche la ligne saisie
	}

	free(buffer); // Libère la mémoire
	return (0);
}

