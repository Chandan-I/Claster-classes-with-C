#include <stdio.h>
#include <stdlib.h>
struct Employee{
    char name[50];
    int age;
    float salary;
};
int main() {
    FILE *file;
    struct Employee emp;
    int count=1;
    file = fopen("employee_details.txt", "rb");
    if (file == NULL) {
        printf("Unable to open the file.\n");
        return 1;
    }
    count = fread(&emp, sizeof(struct Employee), 1, file);
    printf("Employee Details:\n");
    printf("-----------------\n");
    while (count > 0) {
        printf("Name: %s", emp.name);
        printf("Age: %d\n", emp.age);
        printf("Salary: %.2f\n", emp.salary);
        count = fread(&emp, sizeof(struct Employee), 1, file);
    }
    fclose(file);
    return 0;
}
