#ifndef PROJECT_INCLUDE_MODULE_H_
#define PROJECT_INCLUDE_MODULE_H_

#include <stdio.h>
#include <string.h>
#include <math.h>

struct some {
    int num;
    float numf;
    double numd;
    char str[20];
};

void write_to_file(const char *filename, struct some *data);  // Write some expected Data in file

void read_from_file(const char *filename, struct some *data);  // Read written Data from file
                                                               // in another structure

int compare_structures(struct some *ex_data, struct some *got);  // Compare all fields of two structures

void test_write_to_file();  // Main function of test module

#endif  // PROJECT_INCLUDE_MODULE_H_
