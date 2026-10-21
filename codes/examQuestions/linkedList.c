#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};
void print_list(struct node *head)
{
    if (head == NULL)
        printf("Linked list is empty FUCK OFF");
    struct node *ptr = head;
    while (ptr != NULL)

    {
        printf("%d->", ptr->data);
        ptr = ptr->next;
    }
    printf("NULL \n");
}

void insert_node(int data, struct node *head)
{
    struct node *ptr, *temp;
    ptr = head;
    temp = (struct node *)malloc(sizeof(struct node));
    temp->data = data;
    temp->next = NULL;
    while (ptr->next != NULL)
    {
        ptr = ptr->next;
    }
    ptr->next = temp;
    ptr = NULL;
}
void delete_last_node(struct node *head)
{
    struct node *temp;
    temp = head;
    while (temp->next->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = NULL;
}
int main()
{
    struct node *head = NULL;
    head = malloc(sizeof(struct node));
    head->data = 12;
    head->next = NULL;

    insert_node(13, head);
    insert_node(14, head);
    insert_node(15, head);
    insert_node(16, head);
    insert_node(17, head);
    insert_node(18, head);
    print_list(head);
    delete_last_node(head);

    print_list(head);
    return 0;
}