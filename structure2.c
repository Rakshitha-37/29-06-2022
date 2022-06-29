#include<stdio.h>

struct employee
{
    int id;
    char name[20];
    char address[20];
}var;

int main()
{
    //1st method
    int size = (char *)(&var + 1) - (char *)&var;
    printf("Size of structure = %d\n", size);
    
    //2nd method
    struct employee *ptr = NULL;
    ptr++;
    printf("Size of structure = %d\n", ptr);
}

