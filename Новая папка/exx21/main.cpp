#include <stdio.h>
 
#define COL 4
#define ROW 4
 
int main()
{
    int arr[ROW][COL] = { 0 };
    int zero_rows = 0;

    for(int i = 0; i < ROW; i++)
        for(int j = 0; j < COL; j++)
            arr[i][j] = j + i;

    for(int i = 0; i < ROW; i++)
    {
        for(int j = 0; j < COL; j++)
            printf("%d\t", arr[i][j]);
 
        printf("\n");
    }

    for(int i = 0; i < ROW; i++)
        for(int j = 0; j < COL; j++)
            if(arr[i][j] == 0)
            {
                zero_rows++;
                break;
            }

    printf("strings without zeros elements: %d\n", COL - zero_rows);
 
    return 0;
}
