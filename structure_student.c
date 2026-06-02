#include <stdio.h>

struct student
{
    int roll_no;
    char name[20];
    int age;
    char city[20];
};

int main()
{
    struct student s[100];
    
    for(int i=1;i<100;i++)
    {
        printf("enter the roll no of student\n");
        scanf("%d",&s[i].roll_no);
        
        printf("enter the name of student\n");
        scanf("%s",s[i].name);
        
        printf("enter the age of student\n");
        scanf("%d",&s[i].age);
        
        printf("enter the city of student\n");
        scanf("%s",s[i].city);
    }
    
    printf("enter the roll_no:\n");
    scanf("%d",&n);
    
    for(int )
    
    printf("enter the choices\n\n 1. student's name\n 2. student's age\n 3. student's city\n");
    scanf("%d",&m);
    
    switch(m)
    {
        case 1: printf("%s",s[n])
    }

    return 0;
}
