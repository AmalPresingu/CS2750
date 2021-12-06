#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "tests.h"
#include "helper.h"

int main (int argc, char *argv[])
{
    if (argc > 2)
    {
	printf("Type ./calc -h");
	exit(0);
    }
    else if (strcmp(argv[1], "-d") == 0)
    {
        nochecks();
    }
    else if (strcmp(argv[1], "-h") == 0)
    {
        helper();
    }
    else if (strcmp(argv[1], "-a") == 0)
    {
        tests();
    } 
    else
    {
        printf("Type ./calc -h");
	exit(0);
    }
    return 0;
}
 
