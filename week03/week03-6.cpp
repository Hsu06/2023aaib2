#include <stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    int ans=1;
    for(int i=1; i<=N; i++)
    {
        ans*=i;
    }
    printf("%d",ans);
}


//python
a=int(input())
ans=1
for i in range(1,a+1,1):
		ans*=i
print(ans,end='')
