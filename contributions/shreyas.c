#include <stdio.h>
int main()
{
    int m1=0,m2=0,v1x=0,v2x=0,u1x=0,u2x=0,v1y=0,v2y=0,u1y=0,u2y=0; //declaring variables 
    scanf("%d%d",&u1x,&u1y);   // u - initial ,  1 - firstball , x/y - component
    scanf("%d%d",&u2x,&u2y);
    scanf("%d%d",&m1,&m2);
    scanf("%d%d",&v1x,&v1y);
    v2x = ((m1*u1x)+(m2*u2x)-(m1*v1x))/m2;   // calculating using conservation of momentum
    v2y = ((m1*u1y)+(m2*u2y)-(m1*v1y))/m2;
    printf("%d %d\n",v2x,v2y);  // according to given output variable are declared in int
    return 0;
}
