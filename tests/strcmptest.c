#include <stdio.h>
#include <string.h>

char string1[] = "uptime";
char string2[] = "upt";
char string3[] = "uptime";

int main()
{
    printf("string 1: %s string 2: %s string 3: %s \n", string1, string2, string3);
    printf("test 1: 1 vs 2: %d \n", strcmp(string1, string2));
    printf("test 2: 1 vs 3: %d \n", strcmp(string1, string3));
    return 0;
}
