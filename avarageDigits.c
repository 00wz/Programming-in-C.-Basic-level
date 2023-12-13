#include <stdio.h>

int main(void)
{
    int n1;
    scanf("%d",&n1);
    int sum =(n1/1000)+((n1/100)%10)+((n1/10)%10)+(n1%10);
    printf("%.2f\n",sum/4.);
}