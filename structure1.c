#include<stdio.h>

struct employee
{
    int id;
    char name[20];
};

struct employee_data
{
    struct employee var;
    char address[20];
};

int main()
{
    struct employee_data var1;
    printf("Enter id: ");
    scanf("%d", &var1.var.id);
    printf("Enter name: ");
    scanf("%s", var1.var.name);
    printf("Enter address: ");
    scanf("%s", var1.address);
    printf("Employee details:\nName = %s\nID = %d\nAddress = %s\n", var1.var.name, var1.var.id, var1.address);
    
}


