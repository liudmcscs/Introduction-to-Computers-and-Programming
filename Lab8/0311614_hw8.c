#include <stdio.h>
#include <stdlib.h>
#define kinds 4
int d[kinds] ={1,5,10,50};
int i,j,ll=0;
typedef struct stack
{
    int top;
    int stk[100];
} stack;
stack m;

int cc(int n,int k)
{
    int p=0,q=0,rr=0;

    if(n<0||k==0)
    {
      return 0;
    }

    if(n==0)
    {
        int mm[kinds]={0};
        for(q=0;q<kinds;q++)
        {
            mm[q]=0;
        }
        for(i=0;kinds>i;i++)
        {
            for(j=0;j<=m.top;j++)
            {
                if(m.stk[j]==d[i])
                {
                    mm[i]++;
                }
            }
        }
        for(i=0;kinds>i;i++)
        {
            printf("%d\t",mm[i]);
        }
        printf("\n");
        return 1;
    }
    if(n>0&&k>0)
    {
        m.stk[++m.top]=d[k-1];
        p+=cc(n-d[k-1],k);
        m.top--;
        p+=cc(n,k-1);
        return p;
    }
}
void facevalue(int i)
{
    if(i==0)
    {
        return;
    }
    facevalue(i-1);
    printf("$%d\t",d[i-1]);
}

void ui()
{
    int money,j,i;
    printf("Enter amount of money:");
    while (1)
    {
        if(scanf("%d",&money)!=EOF)
        {
            facevalue(kinds);
            printf("\n");
            j=cc(money,kinds);
            printf("There are %d ways to make change.",j);
            printf("\n");
            for(i=0;i<=99;i++)
            {
            m.stk[i]=0;
            }
            ui();
            break;
        }
        else
        {
            break;
        }
    }
}
int main()
{
    m.top=-1;
    ui();
    return 0;
}
