#include <stdio.h>
int main()
{
    int pt,st,pv,sv;
    printf("Enter the primary voltage:\n");
    scanf("%d",&pv);
    printf("Enter the primary turns:\n");
    scanf("%d",&pt);
    printf("Enter the secondary turns:\n");
    scanf("%d",&st);
    sv=(pv*st)/pt;
    printf("Secondary Voltage is %d",sv);
    return 0;
}
