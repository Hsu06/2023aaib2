#include <stdio.h>
int main()
{
	int N;
	scanf("%d",&N);
	int ans=1;
	for(int i=1;i<=N;i++){
		ans*=i;
		}
		printf("%d",ans);
		}
