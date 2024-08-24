#include <stdio.h>
#include<stdlib.h>
struct Student {
    char name[50];
    int age;
    float marks;
};

int main() {
    struct Student s;
    FILE *f1,*f2;

    // Open the file in binary write mode
    f1 = fopen("C:\\Users\\CHANDAN RAJ\\Desktop\\cluster\\structure file eg.txt", "r");
    f2 = fopen("file2.txt","w");
    if (f1 == NULL||f2==NULL) {
        printf("Error opening the file.\n");
        exit(1);
}
    fread(&s,sizeof(struct Student),1,f1);
   fwrite(&s,sizeof(struct Student),1,f2);
   fclose(f1);
   fclose(f2);
    return 0;
}
