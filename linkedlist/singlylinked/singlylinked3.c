/*deletion from a given position*/

#include<stdio.h>
#include<malloc.h>

struct list
{
    int val;
    struct list *next;
};

int main(void)
{
    struct list *head,*x,*temp,*tempa,*tempb,*tempc;
    int ch=1,pos,count=0;
    head=NULL;
    while(ch==1)
    {
        x=(struct list*)malloc(sizeof(struct list));
        printf("Enter no:\n");
        scanf("%d",&x->val);
        if(head==NULL)
        {
            head=x;
            head->next=NULL;
            temp=x;
            tempa=x;
            tempb=x;
            tempc=x;
        }
        else
        {
            head->next=x;
            head=x;
        }
        scanf("%d",&ch);
    }

    head->next=NULL;
    while(temp!=NULL)
    {
        printf("%d=>",temp->val);
        temp=temp->next;
    }
    printf("Enter position\n");
    scanf("%d",&pos);
    while(count<pos-2)
    {
        tempa=tempa->next;
        tempb=tempb->next;
        count++;
    }

    tempb=tempb->next;
    tempa->next=tempb->next;
    while(tempc!=NULL)
    {
        printf("%d=>",tempc->val);
        tempc=tempc->next;
    }
    return 0;
}
