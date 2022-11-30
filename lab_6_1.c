#include <stdio.h>
#include <stdlib.h>

int main()
{
    int columns = 0, rows = 0, k = 0, p = 0;
    printf("Введіть розмір матриці через пробіл так 'колонки рядки' : ");
    scanf("%d %d", &columns, &rows);
    printf("Введіть номер колонок які хочите поміняти місцями  : ");
    scanf("%d %d", &k, &p);

    int array[rows][columns], newArray[rows][columns];
    for (int i = 0; i < rows; i++)
    {
        for (int a = 0; a < columns; a++)
        {
            printf("Введіть значення для колонки №%d рядка №%d = ", i, a);
            scanf("%d", &array[i][a]);
        }
    }
    for (int i = 0; i < rows; i++)
    {
        for (int a = 0; a < columns; a++)
        {
            newArray[i][a] = array[i][a];
        }
    }
    printf("Прямокутна матриця до перетворення\n");
    for (int i = 0; i < rows; i++)
    {
        for (int a = 0; a < columns; a++)
            printf("%d\t", array[i][a]);
        printf("\n");
    }
    for (int i = 0; i < columns; i++)
    {
        for (int a = 0; a < rows; a++)
        {
            if (i == k)
            {
                newArray[a][p] = array[a][i];
            }
            if (i == p)
                newArray[a][k] = array[a][i];
        }
    }
    printf("Прямокутна матриця після перетворення\n");
    for (int i = 0; i < rows; i++)
    {
        for (int a = 0; a < columns; a++)
            printf("%d\t", newArray[i][a]);
        printf("\n");
    }
}

