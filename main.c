#include "header.h"

int main() {
    FILE *fp = fopen("logs.txt", "r");
    if (fp == NULL) {
        printf("Cannot open file.\nExiting program.");
        EXIT_FAILURE;
    } else {
        printf("Successfully opened file!\n\n");
    }

    char ipAddress[50];
    char login[30];

    while(fscanf(fp, "%s %s", ipAddress, login) != EOF) {
        printf("Current Scanning\n");
        printf("-------------------------------------------\n");
        printf("IP: %s\nLogin Status: %s\n", ipAddress, login);
    }
    EXIT_SUCCESS;
}
