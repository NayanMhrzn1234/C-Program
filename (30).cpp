#include <stdio.h>
#define Max 5

int main()
{
    int number[Max], key, i, flag = 0;

    for (i = 0; i < Max; i++)
    {
        printf("Enter the %d th element of array: ", i + 1);
        scanf("%d", &number[i]);
    }

    
    printf("Enter the key element: ");
    scanf("%d", &key);

    for (i = 0; i < Max; i++)
    {
        if (key == number[i])
        {
            flag = 1;
            break;
        }
    }

    if (flag == 1)
        printf("%d was found at position %d\n", key, i + 1);
    else
        printf("%d was not found\n", key);

    return 0;
}
