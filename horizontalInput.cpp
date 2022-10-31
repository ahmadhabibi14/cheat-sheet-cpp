#include <stdio.h>
#include <conio.h>
#include <windows.h>

int main()
{
    FILE *file = NULL;
    char fname[256] = "test.txt";
    char numbers[50] = {0};
    int count = 0;

    printf("You may enter up to 50 integers\n");
    printf("Enter number of integers: ");
    scanf("%d", &count);

    if (count <= 0 || count > 50)
    {
        printf("\n\nInvalid number !\n");
        return 1;
    }

    printf("\nEnter your numbers: ");
    file = fopen(fname, "a+");

    for (int i = 0; i < count; ++i)
    {
        scanf("%s", numbers);
        fprintf(file, "%s ", numbers);

        for (int j = 0; j < count; ++j)
        {
            system("cls");
            printf("You may enter up to 50 integers\n");
            printf("Enter number of integers: %d\n", count);

            rewind(file);
            fgets(numbers, 49, file);
            printf("\nEnter your numbers: %s", numbers);
        }
    }

    fclose(file);
    remove("test.txt");

    printf("\n\nEnd !\n");
    printf("\nPress any key to close");
    _getch();

    return 0;
}