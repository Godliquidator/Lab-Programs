// Ques:- Take a string of 20 characters and display it in five equal parts. (four characters each)
// Name- Isha Mishra
// Roll No- 210501568
// Batch- B14
#include <stdio.h>
#include <string.h>

int main()
{
    char arr[20];
    printf("Enter a String of 20 characters:\n");
    scanf("%s", arr);

    printf("\nThe Entered string is ");
    for (int x = 0; x < 20; x++)
    {
        printf("%c", arr[x]); //Storing the character.
    }

    char *b = arr;      //decalre pointer variable.
    char *c = arr + 4;  //decalre pointer variable.
    char *d = arr + 8;  //decalre pointer variable.
    char *e = arr + 12; //decalre pointer variable.
    char *f = arr + 16; //decalre pointer variable.

    int i;
    printf("\nThe first part of the entered string is: ");
    for (i = 0; i < 4; i++)
    {
        printf("%c", *(b + i)); //display first four characters.
    }

    int j;
    printf("\nThe second part of the entered string is: ");
    for (j = 0; j < 4; j++)
    {
        printf("%c", *(c + j)); //display next four characters.
    }

    int k;
    printf("\nThe third part of the entered string is: ");
    for (k = 0; k < 4; k++)
    {
        printf("%c", *(d + k)); //display next four characters.
    }

    int l;
    printf("\nThe fourth part of the entered string is: ");
    for (l = 0; l < 4; l++)
    {
        printf("%c", *(e + l)); //display next four characters.
    }

    int m;
    printf("\nThe fifth and final part of the entered string is: ");
    for (m = 0; m < 4; m++)
    {
        printf("%c", *(f + m)); //display next four characters.
    }

    return 0;
}
