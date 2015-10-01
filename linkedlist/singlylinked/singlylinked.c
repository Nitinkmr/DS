/*insertion at the begining*/
/*memory allocation of a structure is continuous while that of a linked list is not*/
#include<stdio.h>
#include<malloc.h>

int main(void)
{
    struct list {
    int val;
    struct list* next;
};

    struct list *head,*x;
    int ch=1;
    head=0;
    while(ch==1)
    {
        x= (struct list *)malloc(sizeof (struct list)); /*malloc returns a pointer to the block of memory
                                                        allocated and this pointer can be cast to any data type*/
        printf("Enter no:\n");
        scanf("%d",&x->val);
        if(head==0)
        {
            head=x;
            head->next=NULL;
        }
        else
        {
            x->next=head; /* x->next will store the address of head*/
            head=x;
        }
        fflush(stdin);
        scanf("%d",&ch);

    }
    x=head;
    while(x!=NULL)
    {
        printf("%d=>",x->val);
        x=x->next;
    }
    return 0;
}
