#include "../include/depot_validator.h"


int is_depot_name_valid(char* a_string)
{
    unsigned int i;

    if (strlen(a_string) > 63) {
        printf("Depot name is too long! (max 63 letters)\n");
        return 0;
    }

    for (i=0; i<strlen(a_string); i++) {
        if (isspace(a_string[i]) || isdigit(a_string[i]))
            continue;

        /* check/make the beginnings of word capital */
        if (i == 0 || (i >= 1 && isspace(a_string[i-1]))) {
            if (isupper(a_string[i]))
                continue;

            if (islower(a_string[i])) {
                a_string[i] = toupper(a_string[i]);
                continue;
            }
        }
        /* for the rest check/make the letters lower */
        else {
            if (islower(a_string[i]))
                continue;

            if (isupper(a_string[i])) {
                a_string[i] = tolower(a_string[i]);
                continue;
            }
        }

        /* if a_string[i] is not a letter or digit */
        return 0;
    }

    /* if everything gone properly */
    return 1;
}
