#include<stdio.h>
#include<malloc.h>

struct node {
    int data;
    struct node* next;
};
struct node * insert(struct node *ptr)
{
    int ch=1;
    while(ch==1)
    {
        struct node *x = (struct node*)malloc(sizeof (struct node));
        printf("Enter value\n");
        scanf("%d",&x->data);
        if(ptr==NULL)
        {
            ptr=x;
            ptr->next=NULL;
        }
        else
        {
            x->next=ptr;
            ptr=x;
        }
        scanf("%d",&ch);
    }
//printf("%d ",ptr->data);
    return ptr;
}

/*struct node * print(struct node *head)
{
    struct node *x=(struct node*)malloc(sizeof(struct node));
    if(head==NULL ||head->next==NULL)
        return head;
    x=print(head->next);
    printf("%d=>",x->data);
   // return head;
}*/
void print(struct node *temp)
{
    while(temp!=NULL)
    {
        printf("%d=>",temp->data);
        temp=temp->next;
    }
}
int main(void)
{
    struct node *x,*head,*temp;
    head=NULL;
    int ch=1;
    temp=insert(head);
   // printf("%d\n\n",head->data);
   print(temp);/*print(head) not working??*/
    return 0;

}
