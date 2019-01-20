#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* readline();
char** split_string(char*);

// Complete the taumBday function below.
long long int taumBday(int b, int w, int bc, int wc, int z) {

    long long int cost,i=bc,j=wc;

    if(bc>wc+z){
        i=wc+z;
    }

    if(wc>bc+z){
        j=bc+z;
    }

    cost=b*(i)+w*(j);
    printf("%lld",cost);
return(cost);

}

int main()
{
    FILE* fptr = fopen(getenv("OUTPUT_PATH"), "w");

    char* t_endptr;
    char* t_str = readline();
    int t = strtol(t_str, &t_endptr, 10);

    if (t_endptr == t_str || *t_endptr != '\0') { exit(EXIT_FAILURE); }

    for (int t_itr = 0; t_itr < t; t_itr++) {
        char** bw = split_string(readline());

        char* b_endptr;
        char* b_str = bw[0];
        int b = strtol(b_str, &b_endptr, 10);

        if (b_endptr == b_str || *b_endptr != '\0') { exit(EXIT_FAILURE); }

        char* w_endptr;
        char* w_str = bw[1];
        int w = strtol(w_str, &w_endptr, 10);

        if (w_endptr == w_str || *w_endptr != '\0') { exit(EXIT_FAILURE); }

        char** bcWcz = split_string(readline());

        char* bc_endptr;
        char* bc_str = bcWcz[0];
        int bc = strtol(bc_str, &bc_endptr, 10);

        if (bc_endptr == bc_str || *bc_endptr != '\0') { exit(EXIT_FAILURE); }

        char* wc_endptr;
        char* wc_str = bcWcz[1];
        int wc = strtol(wc_str, &wc_endptr, 10);

        if (wc_endptr == wc_str || *wc_endptr != '\0') { exit(EXIT_FAILURE); }

        char* z_endptr;
        char* z_str = bcWcz[2];
        int z = strtol(z_str, &z_endptr, 10);

        if (z_endptr == z_str || *z_endptr != '\0') { exit(EXIT_FAILURE); }

        long long int result = taumBday(b, w, bc, wc, z);

        fprintf(fptr, "%lld\n", result);
    }

    fclose(fptr);

    return 0;
}

char* readline() {
    size_t alloc_length = 1024;
    size_t data_length = 0;
    char* data = malloc(alloc_length);

    while (true) {
        char* cursor = data + data_length;
        char* line = fgets(cursor, alloc_length - data_length, stdin);

        if (!line) { break; }

        data_length += strlen(cursor);

        if (data_length < alloc_length - 1 || data[data_length - 1] == '\n') { break; }

        size_t new_length = alloc_length << 1;
        data = realloc(data, new_length);

        if (!data) { break; }

        alloc_length = new_length;
    }

    if (data[data_length - 1] == '\n') {
        data[data_length - 1] = '\0';
    }

    data = realloc(data, data_length);

    return data;
}

char** split_string(char* str) {
    char** splits = NULL;
    char* token = strtok(str, " ");

    int spaces = 0;

    while (token) {
        splits = realloc(splits, sizeof(char*) * ++spaces);
        if (!splits) {
            return splits;
        }

        splits[spaces - 1] = token;

        token = strtok(NULL, " ");
    }

    return splits;
}
