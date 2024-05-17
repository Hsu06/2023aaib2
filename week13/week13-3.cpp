#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int N=0;
    int a[20]={};
    while(n>0){
        a[N++]=n%10;
        n=n/10;
    }
    int bad=0;
    for(int i=0;i<n;i++){
        if(a[i]!=a[N-1-i]) bad=1;
    }
    if(bad==1) printf("NO\n");
	else printf("YES\n");
}

