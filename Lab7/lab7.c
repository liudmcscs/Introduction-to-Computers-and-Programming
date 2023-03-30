#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct node {
char c;
struct node *next;
};
typedef struct node Node;
Node *first,*current,*previous,*ptr;
void append(Node* current,int i)
{
    if(i==0)
    {
        current->next=NULL;
    }
    else
    {
        previous->next=current;
        current->next=NULL;
        previous=current;
    }
}
Node*reverse(Node*head)
{
	if(NULL==head)
    {
        return NULL;
    }
	Node *cur,*pre,*temp;
	cur=head;
	temp=head->next;
	pre=NULL;
	while(cur!=NULL)
	{
        temp=cur->next;
	    cur->next=pre;
	    pre=cur;
	    cur=temp;
	}
	return pre;
}
int main()
{
    int i,x;
    char p[100]={0};
    while(1)
    {
        printf("Enter a string:");
        if(scanf("%s",p)==EOF)break;
        x=strlen(p);
        for(i=0;i<=x;i++)
        {
            current=(Node*)malloc(sizeof(Node));
            current->c=p[i];
            if(i==0)
            {
                first=current;
                previous=current;
            }
            append(current,i);
        }
        ptr=first;
        ptr=reverse(ptr);
        printf("string reversal :");
        while(current!=NULL)
        {
            printf("%c",current->c);
            current=current->next;
        }
        printf("\n");
    }

    return 0;
}
