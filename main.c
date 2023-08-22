#include <stdio.h>
#include <stdlib.h>


void t_multiplication (int n){
int i;
for(i=0;i<=10;i++)
    printf("%d*%d=%d\n",n,i,n*i);
}

int main()
{
    int n;
    printf("enter the value of n");
    scanf("%d",&n);

    t_multiplication(n);
    return 0;
}
