#include "module.h"

void write_to_file(const char *filename, struct some *data) {
    FILE *Ptr = fopen(filename, "w");
    fprintf(Ptr, "%-12d%-11.4f%-15.8lf%s\n", data->num, data->numf, data->numd, data->str);
    fclose(Ptr);
}

void read_from_file(const char *filename, struct some *data) {
    FILE *Ptr = fopen(filename, "r");
    fscanf(Ptr, "%d%f%lf%20s", &data->num, &data->numf, &data->numd, data->str);
    fclose(Ptr);
}

int compare_structures(struct some *ex_data, struct some *got) {
    double eps = 0.0000001;
    if (ex_data->num == got->num && (fabsf(ex_data->numf - got->numf) < eps)
    && (fabs(ex_data->numd - got->numd) < eps) && strcmp(ex_data->str, got->str) == 0) {
        return 1;
    }
    return 0;
}

void test_write_to_file() {
    const char *filename = "test.dat";
    struct some expected_data = { 20, 38.f, 47.24434342, "Work"};
    write_to_file(filename, &expected_data);
    struct some got_data = { 0, 0.f, 0.f, "\0"};
    read_from_file(filename, &got_data);
    int status;
    status = compare_structures(&expected_data, &got_data);
    if (!status)
        puts("Something went wrong with in/out put");
    else
        puts("Data has written and read SUCCESSFULLY");
}
