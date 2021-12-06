#include <stdio.h>
#include "tests.h"

void tests()
{
    int num1;
    int num2;
    char result[50];

    printf("Add\n");
    printf("Subtract\n");
    printf("Multiply\n");
    printf("Divide\n");
    printf("Remainder\n");
    printf("Quit\n");
    printf("\nChoose an option (first letter should be capitalized): ");
    scanf("%s", &result);

    if (strcmp(result, "Add") == 0)
    {
        printf("\nEnter first number for addition: ");
        scanf("%d", &num1);
        printf("\nEnter second number for addition: ");
        scanf("%d", &num2);
        add(num1, num2);
    }
    else if (strcmp(result, "Subtract") == 0)
    {
        printf("\nEnter first number for subtraction: ");
        scanf("%d", &num1);
        printf("\nEnter second number for subtraction: ");
        scanf("%d", &num2);
        sub(num1, num2);
    }
    else if (strcmp(result, "Multiply") == 0)
    {
        printf("\nEnter first number for subtraction: ");
        scanf("%d", &num1);
        printf("\nEnter second number for subtraction: ");
        scanf("%d", &num2);
        mult(num1, num2);
    }
    else if (strcmp(result, "Divide") == 0)
    {
        printf("\nEnter first number for division: ");
        scanf("%d", &num1);
        printf("\nEnter second number for division: ");
        scanf("%d", &num2);
        divide(num1, num2);
    }
    else if (strcmp(result, "Remainder") == 0)
    {
        printf("\nEnter first number for remainder: ");
        scanf("%d", &num1);
        printf("\nEnter second number for remainder: ");
        scanf("%d", &num2);
        mod(num1, num2);
    }
    else if (strcmp(result, "Quit") == 0)
    {
	return;	
    }
    else
    {
        printf("\nIncorrect format. Type ./calc -h\n");
    }
}

void nochecks()
{
    int num1;
    int num2;
    char result[50];

    printf("Add\n");
    printf("Subtract\n");
    printf("Multiply\n");
    printf("Divide\n");
    printf("Remainder\n");
    printf("Quit\n");
    printf("\nChoose an option (first letter should be capitalized): ");
    scanf("%s", &result);

    if (strcmp(result, "Add") == 0)
    {
        printf("\nEnter first number for addition: ");
        scanf("%d", &num1);
        printf("\nEnter second number for addition: ");
        scanf("%d", &num2);
        add(num1, num2);
    }
    else if (strcmp(result, "Subtract") == 0)
    {
        printf("\nEnter first number for subtraction: ");
        scanf("%d", &num1);
        printf("\nEnter second number for subtraction: ");
        scanf("%d", &num2);
        sub(num1, num2);
    }
    else if (strcmp(result, "Multiply") == 0)
    {
        printf("\nEnter first number for subtraction: ");
        scanf("%d", &num1);
        printf("\nEnter second number for subtraction: ");
        scanf("%d", &num2);
        mult(num1, num2);
    }
    else if (strcmp(result, "Divide") == 0)
    {
        printf("\nEnter first number for division: ");
        scanf("%d", &num1);
        printf("\nEnter second number for division: ");
        scanf("%d", &num2);
        divide(num1, num2);
    }
    else if (strcmp(result, "Remainder") == 0)
    {
        printf("\nEnter first number for remainder: ");
        scanf("%d", &num1);
        printf("\nEnter second number for remainder: ");
        scanf("%d", &num2);
        mod(num1, num2);
    }
    else
    {}
}

void add(int num1,int num2)
{
    if ((num1 % 1) != 0)
    {
	printf("\nIncorrect Input.\n");
    }
    else 
    {
        printf("\nThe sum is: %d\n", (num1 + num2));
    }
}
void sub(int num1,int num2)
{
    if ((num1 % 1) != 0)
    {
        printf("\nIncorrect Input.\n");
    }
    else
    {
        printf("\nThe difference is: %d\n", (num1 - num2));
    }
}
void mult(int num1,int num2)
{
    if ((num1 % 1) != 0)
    {
        printf("\nIncorrect Input.\n");
    }
    else
    {
	printf("\nThe product is: %d\n", (num1 * num2));        
    }
}
void divide(int num1,int num2)
{ 
    if (num1 == 0)
    {
	printf("\nPlease enter positive whole numbers only.\n");
    }
    else if (num2 == 0)
    {
	printf("\nPlease enter positive whole numbers only.\n");	
    }
    else
    {
        printf("\nThe quotient is: %d\n", (num1 / num2));
    }
}
void mod (int num1,int num2)
{
    if ((num1 % 1) != 0)
    {
        printf("\nIncorrect Input.\n");
    }
    else
    {
	printf("\nThe remainder is: %d\n", (num1 % num2));        
    }
}






