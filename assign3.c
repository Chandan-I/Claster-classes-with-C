#include <stdio.h>
typedef struct {
    char name[50];
    int age;
    float salary;
} Employee;
int main() {
    FILE *file;
    Employee emp;
    file = fopen("employee_details.txt", "wb");
    if (file == NULL) {
        printf("Unable to open the file.\n");
        return 1;
    }
    printf("Enter employee name: ");
    fgets(emp.name, sizeof(emp.name), stdin);
    printf("Enter employee age: ");
    scanf("%d", &emp.age);
    printf("Enter employee salary: ");
    scanf("%f", &emp.salary);
    fwrite(&emp, sizeof(Employee), 1, file);
    fclose(file);
    printf("Employee details have been written to the file.\n");
    return 0;
}
