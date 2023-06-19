#include <stdio.h>
int main(int argc, char const *argv[])
{
    int space, rows, k = 0;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    for (int i = 1; i <= rows; ++i, k = 0)
    {
        for (space = 1; space <= rows - i; ++space)
        {
            printf("  ");
        }
        while (k !=i)
        {
            printf(" * ");
            ++k;
        }
        printf("\n");
    }
    return 0;
}
