#include <stdio.h>
isPrime(int n){
    for(int i=2;i<n;i++){
        if(n%i==0) return 0;
    }
    return 1;
}
int main()
{
    int BOUND=30000, ans=0;
    for(int i=0;i<BOUND;i++){
        if(isPrime(i)){
            printf("%d", i);
            ans++;
        }
    }
    printf("��Ʀ�:%d��\n",ans);
}
