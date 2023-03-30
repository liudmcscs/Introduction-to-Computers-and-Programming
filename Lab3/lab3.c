#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
int main()
{
    unsigned int y,y1,y2,i,i2,e,e1,p,p1,x,l,l1,a,a1,b,b1,c,d,d1,m,m1,n,r,gx1,gx2,i3,i4,y3,y4,i7;
    while(1)
    {
        printf("Enter an unsigned integer >= 2:");
        if(scanf("%u",&y)==EOF)break;
        i=2;
        a=1;
        d=1;
        i2=1;
        l=1;
        l1=1;
        i3=1;
        i4=1;
        y1=y;
        y2=y;
        y3=y;
        y4=y;
        gx1=1;
        gx2=1;
        int first = 1;
        printf("Prime factorization of %u =",y);
        while(i<=y1)
        {
            x=0;
            if(y1%i==0)
            {
                while(y1%i==0)
                {
                    y1=y1/i;
                    x++;
                }
                i7=i;
                if(first == 1)
                {
                    printf("%u^%u",i,x);
                    first = 0;
                }
                else
                {
                    printf("x%u^%u",i,x);
                    i++;
                }
                p1=i7;
                e1=x;
                a*=(1+e1);
                for(b=0,c=0,r=1;c<=e1;c++)
                {
                    b+=r;
                    r*=p1;
                }
                if(d>(UINT_MAX/b))
                {
                    gx2=0;
                    break;
                }
                else
                {
                    d*=b;
                }
            }
            else
            {
                i++;
            }
        }
        printf("\nNumber of divisors = %u",a);
        if(gx2==1)
        {
            printf("\nSum of divisors =%u",d);
        }
        else
        {
            printf("\nSum of divisors overflow!");
        }
        while(i4<=y4)
        {
            if(y4%i4==0)
            {
                for(;i4<=y4,y4%i4==0;i4++)
                {
                    m=y4/i4;
                    if(l>(UINT_MAX/m))
                    {
                        printf("\nProduct of divisors overflow!\n");
                        gx1=0;
                        break;
                    }
                    else
                    {
                          l*=m;
                    }
                }
                if(gx1==0)
                {
                    break;
                }
            }
            else
            {
                i4++;
            }
        }
        if(gx1!=0)
        {
            printf("\nProduct of divisors = %u\n",l);
        }
    }
    return 0;
}
