#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <stdbool.h>

#define BUFFER_SIZE 1024
#define STRING_LENGTH 6
#define NUM_ITERATIONS 500000000

char get_random_char() {
    return (char)(rand() % 26 + 97); // Generates a random character between 'a' and 'z'
}

bool is_in_list(const char *s, const char *list[], int list_size) {
    for (int i = 0; i < list_size; i++) {
        if (strcmp(s, list[i]) == 0) {
            return true;
        }
    }
    return false;
}

int main() {
    const char *l[] = {"ridans", "simran", "manasa", "navdha"};
    int l_size = sizeof(l) / sizeof(l[0]);
    char s[STRING_LENGTH + 1]; // 6 characters + null terminator
    char output_buffer[BUFFER_SIZE];
    int buffer_index = 0;

    srand(time(NULL)); // Seed the random number generator

    for (int i = 0; i < NUM_ITERATIONS; i++) {
        for (int j = 0; j < STRING_LENGTH; j++) {
            s[j] = get_random_char();
        }
        s[STRING_LENGTH] = '\0'; // Null-terminate the string

        if (is_in_list(s, l, l_size)) {
            int len = snprintf(output_buffer + buffer_index, BUFFER_SIZE - buffer_index, "%s\n", s);
            buffer_index += len;

            if (buffer_index >= BUFFER_SIZE - STRING_LENGTH - 1) {
                fwrite(output_buffer, 1, buffer_index, stdout);
                buffer_index = 0;
            }
        }
    }

    // Write any remaining output in the buffer
    if (buffer_index > 0) {
        fwrite(output_buffer, 1, buffer_index, stdout);
    }

    return 0;
}