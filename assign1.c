#include <stdio.h>
typedef struct {
    char name[50];
    int age;
    float salary;
} Employee;
int main() {
    FILE *f;
    Employee emp;
    printf("Enter employee name: ");
    fgets(emp.name, sizeof(emp.name), stdin);
    printf("Enter employee age: ");
    scanf("%d", &emp.age);
    printf("Enter employee salary: ");
    scanf("%f", &emp.salary);
    f = fopen("employee.txt", "w");
    if (f == NULL) {
        printf("Error opening f.");
        return 1;
    }
    fprintf(f, "%s\n %d\n %.2f", emp.name, emp.age, emp.salary);
    fclose(f);
    f = fopen("employee.txt", "r");
    if (f == NULL) {
        printf("Error opening f.");
        return 1;
    }
    fscanf(f, "%[^\n]%*c\n %d\n %f\n", emp.name, &emp.age, &emp.salary);
    fclose(f);
    printf("\nEmployee Details:\n");
    printf("Name: %s\n", emp.name);
    printf("Age: %d\n", emp.age);
    printf("Salary: %.2f\n", emp.salary);
    return 0;
}
