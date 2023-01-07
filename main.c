// by nima khabazzadeh

#include <stdio.h>

int main()
{
    int a[4];
    int z, j, i;
    for (i = 0; i < 5; i++)
    {
        printf("Enrter %i:", i);
        scanf("%i", &a[i]);
    }
    printf("++++++++++++++++++++++++++\n");
    for (j = 0; j < 5; j++)
    {
        for (z = 2; z < a[j]; z++)
        {
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
