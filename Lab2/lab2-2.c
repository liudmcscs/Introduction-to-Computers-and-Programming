#include <stdio.h>
#include <stdlib.h>

int main()
{
    long long n,k,l,k1,l1,n1,a,b,c,ans,x1,w1,w,x,ans2;
    int i,j;
    printf("Enter n and k, 20>=n>=k>=0: ");
    while(scanf("%lld %lld",&n,&k)!=EOF)
    {
        l=n-k;
        a=n;
        b=k;
        c=l;
        n1=n;
        k1=k;
        l1=l;
        if(20>=n&&n>=k&&k>=0)
        {
            if(k==0)
            {
                k1=1;
            }
            else
            {
                for(--k;k>=1;--k) k1*=k;
            }
            if(l==0)
            {
                l1=1;
            }
            else
            {
                for(--l;l>=1;--l)l1*=l;
            }
            for(--n;n>=1;--n) n1*=n;
            ans=n1/(k1*l1);
            printf("c(%lld,%lld)=%lld!/(%lld!%lld!)=%lld/(%lld*%lld)=%lld\n",a,b,a,b,c,n1,k1,l1,ans);
            for(i=1;i<=a;i++)
            {
                for(j=1;j<=b;j++)
                {
                    w=i;
                    x=j;
                    l=w-x;
                    c=l;
                    w1=w;
                    x1=x;
                    l1=l;
                    if(20>=w&&w>=x&&x>=0)
                    {
                        for(--x;x>=1;--x)x1*=x;
                        if(l==0)
                        {
                            l1 =1;
                        }
                        else
                        {
                            for(--l;l>=1;--l)l1*=l;
                        }
                        for(--w;w>=1;--w)w1*=w;
                        ans2=w1/(x1*l1);
                        printf("%d ",ans2);
                    }
                    else
                    {
                        ans2=0;
                        printf("%d ",ans2);
                    }
                }
                printf("\n");
            }
        }
        else
        {
            printf("You didn't obey 20>=n&&n>=k&&k>=0. \n");
        }
    }

    return 0;
}

