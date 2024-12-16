#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char **split_string(const char *str) {
    if (str == NULL) return NULL;

    // Copie la chaîne d'origine
    char *copy = strdup(str);
    if (copy == NULL) return NULL;

    // Allouer un tableau pour stocker temporairement les mots
    char **words = malloc(100 * sizeof(char *)); // On suppose un maximum de 100 mots
    if (words == NULL) {
        free(copy);
        return NULL;
    }

    // Utiliser strtok pour diviser la chaîne
    int i = 0;
    char *token = strtok(copy, " ");
    while (token != NULL) {
        words[i++] = strdup(token); // Copier le mot
        token = strtok(NULL, " ");
    }

    words[i] = NULL; // Terminer le tableau avec NULL
    free(copy); // Libérer la copie temporaire

    return words;
}
