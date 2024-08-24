#include <stdio.h>
struct Person {
    char name[50];
    int age;
};
int main() {
    struct Person person;
    // Get input from user
    printf("Enter name: ");
    scanf("%s",person.name);
   // fgets(person.name, sizeof(person.name), stdin);
    printf("Enter age: ");
    scanf("%d", &person.age);
    // Open the file in write mode
    FILE* file = fopen("person.txt", "a");
    if (file == NULL) {
        printf("Error opening file.");
        return 1;
    }
    // Write the structure to the file
    fprintf(file, "\n%s\n%d\n", person.name, person.age);
    // Close the file
    fclose(file);
    printf("Structure has been stored in the file successfully.\n");
    return 0;
}

