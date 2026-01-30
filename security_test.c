// This file will contain all the security functions 
#include "header.h"

// check if ip already has attempted to login earlier ; work on
// count failed attempts ; done 
void checkIP(char ip[], char loginStatus[], int *failedAttempts, int *successfulAttempts) {
    // if the comparison of the two strings result in a 0 then its a match
    if (strncmp(loginStatus, "LOGIN_FAILED", strlen("LOGIN_FAILED")) == 0) {
        printf("%s has failed to login.\n", ip);
        ++*failedAttempts;
    } else if (strncmp(loginStatus, "LOGIN_SUCCESS", strlen("LOGIN_SUCCESS")) == 0) {
        printf("%s has successfully logged in.\n", ip);
        ++*successfulAttempts;
    } else {
        printf("Unidentifiable value\n.");
    }
}
