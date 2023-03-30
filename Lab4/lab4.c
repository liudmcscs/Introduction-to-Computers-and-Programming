#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int ro,col,a,b,fir,sec,thir,four,i,ii,jj;
    char ch,ch1;
    ch='.';
    fir=1;
    printf("Enter the size of the maze:");
    scanf("%d %d",&a,&b);
    ro=1;
	col=1;
    char m[100][100];
    for(ro=1;ro<=a;ro++)
    {
        for(col=1;col<=b;col++)
        {
            if(col==b)
            {
				m[ro][col]=ch;
            }
            else
			{
				m[ro][col]=ch;
			}
        }
    }
    ch1= 'A';
    m[1][1]=ch1;
/*
0          ro++
1          ro--
2          col++
3          col--
*/
	ro=1;
	col=1;
	srand((unsigned) time(NULL));
	for(i=1;i<=25;i++)
	{
		int move=rand()%4;
		if(move==0)
		{
			if(ro+1>a)
			{
				i--;
			}
			else if(m[ro+1][col]!='.')
			{
				i--;
			}
			else
			{
				ch1++;
				ro++;
				m[ro][col]=ch1;
			}
		}
		if(move==1)
		{
			if(ro-1<1)
			{
				i--;
			}
			else if(m[ro-1][col]!='.')
			{
				i--;
			}
			else
			{
				ch1++;
				ro--;
				m[ro][col]=ch1;
			}
		}
		if(move==2)
		{
			if(col+1>b)
			{
				i--;
			}
			else if(m[ro][col+1]!='.')
			{
				i--;
			}
			else
			{
				ch1++;
				col++;
				m[ro][col]=ch1;
			}
		}
		if(move==3)
		{
			if(col-1<1)
			{
				i--;
			}
			else if(m[ro][col-1]!='.')
			{
				i--;
			}
			else
			{
				ch1++;
				col--;
				m[ro][col]=ch1;
			}
		}
		if(m[ro+1][col]!='.'&&m[ro-1][col]!='.'&&m[ro][col+1]!='.'&&m[ro][col-1]!='.')
		{
			printf("\nIf all four directions are blocked , the program must terminate.");
			break;
		}
		else if(m[ro+1][col]!='.'&&m[ro-1][col]!='.'&&m[ro][col+1]!='.'&&col-1<1)
		{
			printf("\nIf all four directions are blocked , the program must terminate.");
			break;
		}
		else if(m[ro+1][col]!='.'&&m[ro-1][col]!='.'&&col+1>b&&m[ro][col-1]!='.')
		{
			printf("\nIf all four directions are blocked , the program must terminate.");
			break;
		}
		else if(m[ro+1][col]!='.'&&ro-1<1&&m[ro][col+1]!='.'&&m[ro][col-1]!='.')
		{
			printf("\nIf all four directions are blocked , the program must terminate.");
			break;
		}
		else if(col+1>a&&m[ro-1][col]!='.'&&m[ro][col+1]!='.'&&m[ro][col-1]!='.')
		{
			printf("\nIf all four directions are blocked , the program must terminate.");
			break;
		}
		else if(m[ro+1][col]!='.'&&ro-1<1&&m[ro][col+1]!='.'&&col-1<1)
		{
			printf("\nIf all four directions are blocked , the program must terminate.");
			break;
		}
		else if(ro+1>a&&m[ro-1][col]!='.'&&m[ro][col+1]!='.'&&col-1<1)
		{
			printf("\nIf all four directions are blocked , the program must terminate.");
			break;
		}
		else if(m[ro+1][col]!='.'&&ro-1<1&&col+1>b&&m[ro][col-1]!='.')
		{
			printf("\nIf all four directions are blocked , the program must terminate.");
			break;
		}
		else if(ro+1>a&&m[ro-1][col]!='.'&&col+1>b&&m[ro][col-1]!='.')
		{
			printf("\nIf all four directions are blocked , the program must terminate.");
			break;
		}
	}
	ro=1;
	col=1;
	printf("\n");
	for(ro=1;ro<=a;ro++)
	{
		for(col=1;col<=b;col++)
		{
			if(col==b)
			{
				printf("%c\n",m[ro][col]);
			}
			else
			{
				printf("%c",m[ro][col]);
			}
		}
	}
	return 0;
}
