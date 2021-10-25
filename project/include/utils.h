#ifndef PROJECT_INCLUDE_UTILS_H_
#define PROJECT_INCLUDE_UTILS_H_

#include <stdio.h>

struct masterRecord {
    int Number;
    char Name[20];
    char Surname[20];
    char addres[30];
    char TelNumber[15];
    double indebtedness;
    double credit_limit;
    double cash_payments;
};

typedef struct masterRecord Data;

void masterWrite(FILE *ofPTR, Data Client);  // Write information about client in file

void transactionWrite(FILE *ofPtr, Data transfer);  // Write new client payment in file

void blackRecord(FILE *ofPTR, FILE *ofPTR_2, FILE *blackrecord, Data client_data, Data transfer);
// Update base

#endif  // PROJECT_INCLUDE_UTILS_H_
