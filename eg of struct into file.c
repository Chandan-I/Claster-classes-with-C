#include <stdio.h>

int main() {
    FILE *file;
    char data[100];

    // Open the file in write mode
    file = fopen("data.txt", "a");

    if (file == NULL) {
        printf("Unable to open the file.\n");
        return 1;
    }

    printf("Enter data to write to the file: ");
    fgets(data, sizeof(data), stdin);

    // Write data to the file
    fprintf(file, "%s", data);

    // Close the file
    fclose(file);

    // Open the file in read mode
    file = fopen("data.txt", "r");

    if (file == NULL) {
        printf("Unable to open the file.\n");
        return 1;
    }

    printf("Data read from the file:\n");

    // Read data from the file and print it
    while (fgets(data, sizeof(data), file)) {
        printf("%s", data);
    }

    // Close the file
    fclose(file);

    return 0;
}
