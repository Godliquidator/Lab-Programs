#include <stdio.h>
int main()
{
    int i, item, m[20], pos = -1;
    for (i = 0; i < 20; i++)
    {
        printf("Enter Data:");
        scanf("%d", &m[i]);
    }
    printf("Enter item:");
    scanf("%d", &item);
    for (i = 0; i < 20; i++)
    {
        if (item == m[i])
        {
            pos = i;
            break;
        }
    }
    if (pos == -1)
    {
        printf("Item is not present.");
    }
    else
        printf("Item is present in array at the position %d", pos + 1);

    return 0;
}
