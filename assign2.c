#include <stdio.h>
int main() {
    FILE *file;
    char filename[100];
    int n, i;  
    printf("Enter the number of characters to read from the end: ");
    scanf("%d", &n);
    file = fopen("C:\\Users\\CHANDAN RAJ\\Desktop\\cluster\\assignment2.txt", "r");
    if (file == NULL) {
        printf("Error opening file.\n");
        return 1;
    }
    fseek(file, 0, SEEK_END);
    fseek(file, -n, SEEK_CUR);    
    printf("Last %d characters of the file:\n", n);
    for (i = 0; i < n; i++) {
        int c = fgetc(file);
        if (c != EOF) {
            fputc(c,file);
        } else {
            break;
        }
    }
    fclose(file);
    return 0;
}
