

#include <stdio.h>
#include <string.h>
int main()
{
	char a[200],b[200];
	scanf("%s",a);
	scanf("%s",b);
	int l1=strlen(a);
	int l2=strlen(b);
	if(l1>l2) printf("1");
	else if(l1<l2) printf("-1");
	else{
		printf("%d",strcmp(a,b));
	}

}

