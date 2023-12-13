#include <stdio.h>

int main(void)
{
    int n1,n2,n3;
    scanf("%d%d%d",&n1,&n2,&n3);
    int sum=n1+n2+n3;
    int mult=n1*n2*n3;
    printf("%d+%d+%d=%d\n",n1,n2,n3,sum);
    printf("%d*%d*%d=%d\n",n1,n2,n3,mult);
}