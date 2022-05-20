//Documentation section
/*Created by tira(20/5/2022) 2D array to store and print value */

//Pre-processor section
#include<stdio.h>

//Global variable section

//Main function section
int main()
{
    
    int temperature[2][7];

    for(int i = 0; i < 2; i++)
    {
        for(int j = 0; j < 7; j++)
        {
            printf("City %d, Day %d: ", i + 1, j + 1);
            scanf("%d", &temperature[i][j]);
        }
    }

    printf("\n Output:\n\n");

    for(int i = 0; i < 2; i++)
    {
        for(int j = 0; j < 7; j++)
        {
            printf("City %d, Day %d = %d\n" , i + 1, j + 1, temperature[i][j]);
        }
    }
    return 0;
}
//User defined section
