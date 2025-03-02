#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data ;
    struct node *next ;
} ;

void InsertAtEnd(struct node **head, int value)
{
    struct node *newnode = (struct node *) malloc(sizeof(struct node)) ;
    newnode->data = value ;
    newnode->next = NULL ;
    struct node *temp = *head ;

    if(*head == NULL)
    {
        *head = newnode ;
    }
    else
    {
        struct node *temp = *head ;
        while(temp->next != NULL)
        {
            temp = temp->next ;
            temp->next = newnode ;
        }
    }
}

void printlist (struct node *head)
{
    struct node *current = head ;
    while(current != NULL)
    {
        printf("%d ", current->data) ;
        current = current->next ;
    }
    printf("\n") ;
}

int main()
{
    struct node *head = NULL ;
    InsertAtEnd(&head, 6) ;
    InsertAtEnd(&head, 3) ;
    InsertAtEnd(&head, 2) ;
    InsertAtEnd(&head, 7) ;
    printlist(head) ;

    return 0 ;
}
