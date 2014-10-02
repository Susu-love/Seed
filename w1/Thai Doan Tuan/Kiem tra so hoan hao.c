#include <stdio.h>
int main()
{
    int i=1;
    int s=0;
    int n;
    printf("nhap so can kiem tra:");
    scanf("%d",&n);
    for(i=1;i<=n/2;i++)
        if (n%i==0) s=s+i;
    if (s==n) printf("so %d la so hoan hao",n);
    else printf("so %d khong phai la so hoan hao",n);
}
