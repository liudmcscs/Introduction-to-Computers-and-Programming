#include <stdio.h>
#include <stdlib.h>
int i,a,c,d,b,Fn,ma,mb,mc,md;
struct matrix
{
int a,b,c,d;
};
struct matrix mul(struct matrix m1,struct matrix m2)
{
    struct matrix mul={m1.a*m2.a+m1.b*m2.c,m1.a*m2.b+m1.b*m2.d,m1.c*m2.a+m1.d*m2.c,m1.c*m2.b+m1.d*m2.d};
    return mul;
}

struct matrix pow(struct matrix m,int n)
{
    struct matrix m1={0,1,1,1};
    for(i=1;i<n;i++)
	{
	   ma=m1.a*0+m1.b*1;
	   mb=m1.a*1+m1.b*1;
	   mc=m1.c*0+m1.d*1;
	   md=m1.c*1+m1.d*1;
	   m1.a=ma;
	   m1.b=mb;
	   m1.c=mc;
	   m1.d=md;
	   m.a=m1.a;
	   m.b=m1.b;
	   m.c=m1.c;
	   m.d=m1.d;
	}
    return m;
}//compute 𝑀𝑛
int F(int n)
{
	struct matrix { int a,b,c,d; };
	struct matrix m={0,1,1,1};
	struct matrix m1={0,1,1,1};
	for(i=1;i<n;i++)
	{
	   ma=m1.a*0+m1.b*1;
	   mb=m1.a*1+m1.b*1;
	   mc=m1.c*0+m1.d*1;
	   md=m1.c*1+m1.d*1;
	   m1.a=ma;
	   m1.b=mb;
	   m1.c=mc;
	   m1.d=md;
	   m.a=m1.a;
	   m.b=m1.b;
	   m.c=m1.c;
	   m.d=m1.d;
	}
	 return m.b;
}
//compute 𝐹𝑛

int main()
{
	int i,Fn,a,c,d,b,n;
	while(1)
    {
        printf("Enter an integer >=0:");
        if(scanf("%d",&n)==EOF)break;
        if(n<0||n>46)
        {
            printf("You are out of the range.\n");
        }
        else
        {
            F(n);
            printf("F(%d)=%d\n",n,F(n));
        }
    }

    return 0;
}
