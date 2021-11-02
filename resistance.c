#include <stdio.h>
int main()
{
    float r1,r2,r3,rp,rs,is,ip,v;
    printf("Enter the value of three resistance:\n");
    scanf("%f%f%f",&r1,&r2,&r3);
    printf("Enter the voltage:\n");
    scanf("%f",&v);
    rs=(r1+r2+r3);
    rp=(r1*r2*r3)/((r1*r2)+(r2*r3)+(r1*r3));
    is=v/rs;
    ip=v/rp;
    printf("Value of equivalent resistance in series is %f\n",rs);
    printf("Value of equivalent resistance in parallel is %f\n",rp);
    printf("Current is series is %f\n",is);
    printf("Current is parallel is %f.",ip);
    return 0;
}
