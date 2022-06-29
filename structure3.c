#include<stdio.h>

struct employee
{
    int id;
    char name[20];
    char address[20];
};

void print_data(struct employee *var)
{
    printf("Employee details:\nName = %s\nID = %d\nAddress = %s\n", var->name, var->id, var->address);
}

int main()
{
    struct employee var;
    printf("Enter employee id: ");
    scanf("%d", &var.id);
    printf("Enter employee name: ");
    scanf("%s", var.name);
    printf("Enter employee address: ");
    scanf("%s", var.address);
    print_data(&var);
}
