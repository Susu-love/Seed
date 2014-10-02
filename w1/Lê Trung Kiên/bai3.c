#include <stdio.h>

int main()
{
    int n,i,check;
    printf("nhap vao so tu nhien n : ");
    scanf("%d",&n);
    check=n;
    for(i=1;i<n;i++)
    {
        if(n%i==0)
            check=check-i;
    }
    if(check==0)
        printf("%d la so hoan hao.",n);
    else printf("%d khong phai la so hoan hao.",n);
    return 0;
}
