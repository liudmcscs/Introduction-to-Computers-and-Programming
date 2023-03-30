#include <stdio.h>
#include <stdlib.h>
int main()
{
	int  var;
	printf("Enter a 6-digit integer:");
	int d1,d2,d3,d4,d5,d6,ans1,s1,s2,s3,s4,s5,s6,s1t,s2t,s3t,s4t,s5t,ans2;
    while(scanf("%d",&var) !=EOF)
    {
		if(1000000>var&&var>=100000)
		{
			d1=var/100000;
			d2=var/10000;
			d3=var/1000;
			d4=var/100;
			d5=var/10;
			d6=var;
			ans1=d1+d2+d3+d4+d5+var;
			s1=var/100000;
			s2=var/10000;
			s3=var/1000;
			s4=var/100;
			s5=var/10;
			s6=var;
			s1t=s6-s5*10;
			s2t=s6-s4*100;
			s3t=s6-s3*1000;
			s4t=s6-s2*10000;
			s5t=s6-s1*100000;
			ans2=s1t+s2t+s3t+s4t+s5t+var;
			printf("%0.1d+%0.2d+%0.3d+%0.4d+%0.5d+%0.6d=%d\n",d1,d2,d3,d4,d5,var,ans1);
			printf("%0.1d+%0.2d+%0.3d+%0.4d+%0.5d+%0.6d=%d\n",s1t,s2t,s3t,s4t,s5t,var,ans2);
		}
		else
		{
			printf("Your input is not a 6-digit integer. Exit\n");
		}
    }
    return 0;
}
