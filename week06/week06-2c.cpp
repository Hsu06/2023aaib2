#include <stdio.h>
int main(void)
{
    int i,j;
    int n;

    printf("�п�J�j�p:\n");
    scanf("%d",&n);

    for(int i=1; i<=n; i++)
    {
        int star=n,space=i;

        for(int k=0; k<space; k++)
            printf(" ");
        for(int k=0; k<star; k++)
            printf("*");

        printf("\n",i);
    }
    return 0;
}



