#include <stdio.h>
int main()
{
    int pos;
    printf("Enter pos of object\n1.At Infinity\n2.Beyond centre of curvature C\n3.At the centre of curvature C\n4.Between C and F\n5.At focus F.\n");
    scanf("%d", &pos);
    if (pos == 1)
    {
        printf("Position:At focus f \n\n\nSize of image:Highly diminished \n\n\nNature of image:Real and inverted\n");
    }
    else if (pos == 2)
    {
        printf("Position:Between f and c \n\n\nSize of image:Diminished \n\n\nNature of image:Real and inverted\n");
    }
    else if (pos == 3)
    {
        printf("Position:At c \n\n\nSize of image:Same size \n\n\nNature of image:Real and inverted\n");
    }
    else if (pos == 4)
    {
        printf("Position:Beyond c \n\n\nSize of image:Enlarged \n\n\nNature of image:Real and inverted\n");
    }
    else if (pos == 5)
    {
        printf("Position:At infinity \n\n\nSize of image:Highly enlarged \n\n\nNature of image:Real and inverted\n");
    }
    else
    {
        printf("Invalid Option.Please Try Again.");
    }
}