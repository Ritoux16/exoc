#include <stdio.h>
#include <stdlib.h>

int tab_size = 5;
int tab[10] = {2, -3, 4, 8, 1};

int main(void)
{
    printf("[ ");
    for (int i = 0; i < tab_size; i++)
    {
        printf("%d ", tab[i]);
    }
    printf("]\n[ ");
    for (int i = 0; i < tab_size; i++)
    {
        tab[i] *= 2;
        printf("%d ", tab[i]);
    }
    printf("]\n");
}