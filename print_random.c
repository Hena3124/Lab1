#include <stdio.h>
#include <stdlib.h>
#include "random.c"

void rand_string(char *str, size_t size) {
    for (size_t i = 0; i < size; i++) {
        str[i] = randchar();
    }
    str[size] = '\0';
}

char* rand_string_alloc(size_t size) {
    char *s = malloc(size + 1);
    if (s) {
        rand_string(s, size);
    }
    return s;
}

int main() {
    srand(time(NULL)); 

    char *random_word = rand_string_alloc(7); // Generateing a 7-letter word here
    if (random_word) {
        printf("Random 7-letter word: %s\n", random_word);
        free(random_word); 
    }

    return 0;
}

