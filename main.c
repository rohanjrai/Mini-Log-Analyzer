#include "header.h"

int main() {
    FILE *fp = fopen("logs.txt", "r"); // open file in reading mode
    // check to see if the file actually exists
    if (fp == NULL) {
        printf("Cannot open file.\nExiting program."); 
        EXIT_FAILURE; // exit program if file does not exist
    } else {
        printf("Successfully opened file!\n\n");
    }

    // store and count # of suspicious ips and failed attempts
    int suspiciousIPs = 0; int failedAttempts = 0; int successfulAttempts;
    // store the current ip and the login status
    char currIP[MAX_LENGTH]; char login[LOGIN_STATUS];

    printf("Current Scanning\n");
    printf("-------------------------------------------\n");
    // the first string is the ip, the second string is the login status
    // add max limit to how many lines can be tested (~100)
    while(fscanf(fp, "%s %s", currIP, login) != EOF) {  
        checkIP(currIP, login, &failedAttempts, &successfulAttempts);
    }

    // print out the results
    printf("-------------------------------------------\n");
    printf("RESULTS:\n\n");
    printf("-> %d Failed login attempts\n", failedAttempts);
    printf("-> %d Successful login attempts\n", successfulAttempts);

    fclose(fp);
    EXIT_SUCCESS;
}
