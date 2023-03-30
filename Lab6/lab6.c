#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    FILE *fp;
    while(1)
    {
        int i=0,j=0,x=0;
        char buf[100]={0};
        char m[100][100]={0},str[100];
        printf("Enter filename: ");
        if(scanf("%s",str)==EOF)return 0;
        fp = fopen(str,"r");
        while(fgets(buf,100,fp) != NULL)
        {
            i=0;
            while(buf[i]!='\0'&&buf[i]!='\n')
            {
                i++;
            }
            i--;
            while(i>=0)
            {
                printf("%c",buf[i]);
                i--;
            }
            printf("\n");
        }
    }
    fclose(fp);
    return 0;
}

