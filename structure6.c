#include<stdio.h>

struct employee
{
    int id;
    char name[20];
    struct employee_data
    {
        char address[20];
    }var1;
}var;



int main()
{
    printf("Enter id: ");
    scanf("%d", &var.id);
    printf("Enter name: ");
    scanf("%s", var.name);
    printf("Enter address: ");
    scanf("%s", var.var1.address);
    printf("Employee details:\nName = %s\nID = %d\nAddress = %s\n", var.name, var.id, var.var1.address);
    
}