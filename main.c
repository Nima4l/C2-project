// by nima khabazzadeh

#include <stdio.h>

int main()
{
    //arrys 
    int a[20];
    int z, j, i;
    //get numbers from user
    for (i = 0; i < 21; i++)
    {
        printf("Enrter %i:", i);
        scanf("%i", &a[i]);
    }
    printf("++++++++++++++++++++++++++\n");
    //checked numbers for user
    for (j = 0; j < 21; j++)
    {
        for (z = 2; z < a[j]; z++)
        {
            //check to prime numbers
            if (a[j] % z == 0)
            {
                printf("%i\n", a[j]);
                break;
            }
        }
        if (a[j] == z || a[j] == 1)
        {
            printf("-1\n");
        }
    }
}
