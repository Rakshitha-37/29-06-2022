#include<stdio.h>

struct employee
{
    int id;
    char name[20];
    char address[20];
};

int main()
{
    struct employee var;
    printf("Enter employee id: ");
    scanf("%d", &var.id);
    printf("Enter employee name: ");
    scanf("%s", var.name);
    printf("Enter employee address: ");
    scanf("%s", var.address);
    printf("ID = %d, Name = %s, Address = %s", var.id, var.name, var.address);
}

