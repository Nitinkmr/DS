/* doubly linked list*/

#include<stdio.h>
#include<malloc.h>

struct node {
    int data;
    struct node *prev,*next;
};
void insert(struct node *ptr)
{
    int ch=1;
    struct node *x;

    while(ch==1)
    {
            x=(struct node*)malloc(sizeof(struct node));
            printf("Enter data\n");
            scanf("%d",&x->data);
            if(ptr==NULL)
            {
                ptr=x;
                ptr->next=NULL;
                ptr->prev=NULL;

            }
            else
            {
                x->next=ptr;
                ptr->prev=x;
                x->prev=NULL;
                ptr=x;
            }
        scanf("%d",&ch);
    }

}
void display(struct node *head)
{
    while(head->prev!=NULL)
    {
        //printf("%d ",head->data);
        head=head->prev;
    }
    while(head->next!=NULL)
    {

        printf("%d"=>,head->data);
        head=head->next;
    }

}
int main(void)
{
    struct node *head,*x,*temp;
    int ch=1,ch2,val;
    /*initially head is empty*/
    head=(struct node*)malloc(sizeof(struct node));
    insert(head);
    head=head->prev;
    display(head); /*why is head taing a value of 0*/
    return 0;
}
