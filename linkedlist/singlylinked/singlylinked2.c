/*inserting a node at a given position*/

#include<stdio.h>
#include<malloc.h>

struct list {
    int val;
    struct list* next;
};

int main(void)
{
    struct list *head,*x,*temp,*tempa,*xa,*tempb;
    int ch=1,pos,num,count=0;
    head=0;

    while(ch==1)
    {
        x = (struct list*)malloc(sizeof(struct list));/*malloc returns a pointer to the block of memory allocated
                                                        and this pointer can be cast into any datatype*/
        printf("enter value\n");
        scanf("%d",&x->val);
        if(head==0)
        {
            head=x;
            temp=x;
            tempa=x;
            tempb=x;
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
    xa = (struct list*)malloc(sizeof(struct list));
    printf("enter position and number\n");
    scanf("%d",&pos);
    scanf("%d",&xa->val);
    if(pos!=1)
    {
            while(count<(pos-2))
            {


                    tempa=tempa->next;
                    count++;

            }


            xa->next=tempa->next;
            tempa->next=xa;

            while(tempb!=NULL)
            {
                printf("%d=>",tempb->val);
                tempb=tempb->next;
            }
    }
    else
    {
             tempa->val=xa->val;
             while(tempb!=NULL)
            {
                printf("%d=>",tempb->val);
                tempb=tempb->next;
            }
    }
    return 0;
}

