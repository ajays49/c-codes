
#include <stdio.h>
struct student
{
    char name[10];
    int roll;
    float marks;
    
}s; 
int main()
{
    printf(" name: ");
    fgets(s.name, sizeof(s.name), stdin);
    printf(" roll number: ");
    scanf("%d", &s.roll);
    printf("Enter marks: ");
    scanf("%f", &s.marks);
    printf("Name:%s", s.name );
    printf("Roll number: %d\n", s.roll);
    printf("Marks: %f\n", s.marks);

    return 0;
}
