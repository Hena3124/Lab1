//  print_random.c
// #include <stdio.h>
// #include <stdlib.h>
// #include "random.c" // Include the random.c file

// void rand_string(char *s, size_t size) {
//     for (size_t i = 0; i < size; i++) {
//         s[i] = randchar(); // Use the randchar function to fill the string
//     }
//     s[size] = '\0'; // Null-terminate the string
// }

// char* rand_string_alloc(size_t size) {
//     char *s = malloc(size + 1);
//     if (s) {
//         rand_string(s, size);
//     }
//     return s;
// }

// int main() {
//     size_t size = 7; // Length of the random word
//     char *random_word = rand_string_alloc(size);
    
//     if (random_word) {
//         printf("Random Word: %s\n", random_word);
//         free(random_word); // Free the allocated memory
//     }

//     return 0;
// }

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
    srand(time(NULL)); // Seed the random number generator

    char *random_word = rand_string_alloc(7); // Generate a 7-letter word
    if (random_word) {
        printf("Random 7-letter word: %s\n", random_word);
        free(random_word); // Don't forget to free the allocated memory
    }

    return 0;
}

