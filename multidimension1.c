//Documentation section
/* Created by tira(20/5/2022) take 2D array and print*/

//Pre-processor section
#include<stdio.h>

//Global variable section

//Main function section
int main()
{
    int row, column;
    
    printf("Enter row size: ");
    scanf("%d" , &row);
    printf("Enter column size: ");
    scanf("%d" , &column);

    int array[row][column];

    for( int i = 0; i < row; i++)
    {
        for( int j = 0; j < column; j++)
        {
            printf("Enter array[%d][%d]: ", i,j);
            scanf("%d" , &array[i][j]);
        }
        printf("\n");
    }

    printf( "The array element are : \n");
    for( int i = 0; i < row; i++)
    {
        for( int j = 0; j < column; j++)
        {
            printf("%d " , array[i][j]);
        }
        printf("\n");
    }
    return 0;
}
//User defined section
