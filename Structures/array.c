#include <stdio.h>
struct book
{
    char name[20];
    float price;
    int pages;
};
int main()
{
    struct book b[10];
    int i;
    for (i = 0; i <= 5; i++)
    {
        printf("ENTER NAME , PRICE AND PAGES\n");
        scanf("%s%f%d", b[i].name, &b[i].price, &b[i].pages);
    }
    for (i = 0; i <= 5; i++)
        printf("%s  %f  %d", b[i].name, b[i].price, b[i].pages);
    return 0;
}
