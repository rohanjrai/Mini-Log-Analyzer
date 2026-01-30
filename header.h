#ifndef HEADER_H
#define HEADER_H

#define MAX_LENGTH 30
#define LOGIN_STATUS 30

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void checkIP(char ip[], char loginStatus[], int *failedAttempts, int *successfulAttempts);

#endif
