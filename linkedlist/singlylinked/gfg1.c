/*
    Given a singly linked list L0 -> L1 -> … -> Ln-1 -> Ln. Rearrange the nodes in the list so that the new formed list is : L0 -> Ln -> L1 -> Ln-1 -> L2 -> Ln-2 …

You are required do this in-place without altering the nodes’ values.

Examples:
Input:  1 -> 2 -> 3 -> 4
Output: 1 -> 4 -> 2 -> 3

Input:  1 -> 2 -> 3 -> 4 -> 5
Output: 1 -> 5 -> 2 -> 4 -> 3
*/

#include<stdio.h>
#include<malloc.h>

struct node{
    int data;
    struct node *next;
};
void insert(struct node **head_ref)
{
    struct node *new_node;

    int ch=1;
    while(ch==1)
    {
        new_node=(struct node*)malloc(sizeof(struct node));
        printf("enter data:\n");
        scanf("%d",&new_node->data);
       /* if(*head_ref==0)
        {
            *head_ref=new_node;
            *head_ref->next=0;
        }*/
            new_node->next=*head_ref;
            *head_ref=new_node;

        scanf("%d",&ch);
    }
}
void display(struct node *head)
{
    while(head!=NULL)
    {
        printf("%d=>",head->data);
        head=head->next;
    }
    printf("\n");
}
static void reverse(struct node **head_ref)
{
    struct node *current=*head_ref,*prev=NULL,*next;
    while(current!=NULL)
    {
        next=current->next;
        current->next=prev; /* This is just to break the link b/w a no and the no after it and to
                                link the current no with the previous no*/
        prev=current;
        current=next;
    }
    *head_ref=prev;
}
int main(void)
{
    struct node *head;
    head=NULL;
    insert(&head);
    display(head);
    reverse(&head);
    display(head);
    return 0;
}
