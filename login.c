#include <stdio.h>
int main()
{
    char un;
    int pw;
    printf("Enter the Username:\n");
    scanf("%c", &un);
    if (un == 'a')
    {
        printf("Enter the password:\n");
        scanf("%d", &pw);
        if (pw == 12345)
        {
            printf("Login Succesful.\n");
        }
        else
        {
            printf("Incorrect password.Please try again.\n");
        }
    }
    else
    {
        printf("Incorrect Username.Please try again.\n");
    }
    return 0;
}
