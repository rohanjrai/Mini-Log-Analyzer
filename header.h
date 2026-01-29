#ifndef HEADER_H
#define HEADER_H

struct LogEntry {
    char ipAddress[30];
    int failedCount;
};

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int trackCurrentIp(char ip[]);

#endif
