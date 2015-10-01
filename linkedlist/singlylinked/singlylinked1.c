/* inserting at the end of the list*/

#include<stdio.h>
#include<malloc.h>

struct list {
    int val;
    struct list* next;
};
int main(void)
{
    struct list *head,*x,*temp;
    int n=1;
    head=0;
    while(n==1)
    {
        x=(struct list *)(malloc(sizeof(struct list))); /*malloc returns a pointer to the block of memory allocated
                                                        and this pointer can be cast to any data type*/
        printf("Enter value\n");
        scanf("%d",&x->val);
        if(head==0)
        {
            head=x;
            temp=x;
        }
        else
        {
            head->next=x;
            head=x;
        }
        scanf("%d",&n);
    }

    head->next=NULL;
    while(temp!=NULL)
    {
        printf("%d=>",temp->val);
        temp=temp->next;
    }

    return 0;
}

