#include <stdio.h>
#define MAX_RECORDS 100
struct Student {
    char name[50];
    int age;
    float marks;
};
int main() {
    struct Student students[MAX_RECORDS];
    int numRecords;
    printf("Enter the number of records to store: ");
    scanf("%d", &numRecords);
    // Read the student records
    int i;
    for ( i = 0; i < numRecords; i++) {
        printf("Enter the name of student %d: ", i + 1);
        scanf("%s", students[i].name);
        printf("Enter the age of student %d: ", i + 1);
        scanf("%d", &students[i].age);
        printf("Enter the marks of student %d: ", i + 1);
        scanf("%f", &students[i].marks);    }
    // Open the file in write mode
    FILE *file = fopen("students.txt", "w");
    if (file == NULL) {
        printf("Failed to open the file.\n");
        return 1;   }
    // Write the student records to the file
    for (i = 0; i < numRecords; i++) {
        fprintf(file, "%s %d %.2f\n", students[i].name, students[i].age, students[i].marks);   }
    // Close the file
    fclose(file);
    printf("Student records have been stored in the file.\n");
    return 0;
}
