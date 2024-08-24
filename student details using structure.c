#include <stdio.h>

struct Student {
    char name[50];
    int hall;
    int attendence[4];
};
int main() {
    struct Student s;
    int i;
    printf("Enter student name: ");
    scanf("%[^\n]%*c", s.name);
    
    printf("Enter student hall ticket: ");
    scanf("%d", &s.hall);
    
    printf("Enter student attendence: ");
    for(i=0;i<4;i++)
	scanf("%d", &s.attendence);
    
    printf("\nStudent Details:\n");
    printf("Name: %s\n", s.name);
    printf("hall ticket number: %d\n", s.hall);
    for(i=0;i<4;i++)
    printf("attendence: %d\n", s.attendence[i]);
    
    return 0;
}
