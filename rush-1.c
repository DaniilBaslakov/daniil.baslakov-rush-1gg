#include <stdio.h>
#include <stdlib.h>

int     solve(int x, int y, char **argv);

void    printSudoku(char **argv);

int     sameSquare(int x, int y, char **argv, int num);

int     sameColumn(int x, int y, char **argv, int num);

int     sameRow(int x, int y, char **argv, int num);

int     main(int argc, char **argv)
{
    
    int x;
    int y;

    x = 0;
    y = 0;
    
    printSudoku(argv);
    //solve(x, y);
    //printSudoku(sudoku);
    // 9...7.... 2...9..53 .6..124.. 84...1.9. 5.....8.. .31..4... ..37..68. .9..5.741 47.......
    return (0);
}

void    printSudoku(char **argv)
{
    for (int i = 1; i < 10; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            printf("%c ", argv[i][j]);
        }
        putchar('\n');

        
    }
    printf("\n\n");
}

int     solve(int x, int y, char **argv)
{
    int i;
    int j;
    int num;

    i = 0;
    while (argv[i])//row
    {
        j = 0;
        num = 1;
        while (argv[i][j])//column
        {
            while (num < 10)//perebor numbers
            {
                if (!sameColumn(x, y, argv, num) && !sameRow(x, y, argv, num) && !sameSquare(x, y, argv, num))
                {

                }
                num++;
            }
            j++;
        }
        i++;
    }
    return 1;
}

int     sameColumn(int x, int y, char **argv, int num)
{
    for (int i = 1; i < 9; i++)
    {
        if (argv[x][i] == num)
            return 1;
    }
}

int     sameRow(int x, int y, char **argv, int num)
{
    for (int i = 1; i < 10; i++)
    {
        if (argv[i][y] == num)
            return 1;
    }
}

int     sameSquare(int x, int y, char **argv, int num)
{
    //
    if (x < 3)
        x = 0;
    else if (x < 6)
        x = 3;
    else
        x = 6;
    //
    if (y < 3)
        y = 0;
    else if (y < 6)
        y = 3;
    else
        y = 6;
    //
    for (int i = x; i < x + 3; i++)
    {
        for (int j = y; j < y + 3; j++)
        {
            if (argv[x][i] = num)
            return 1;
        }
        
    }
}
