#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int data;
    struct Node *next;
} Node;

Node* createNode(int data)
{
    Node *newNode = malloc(sizeof(Node));

    if (newNode == NULL)
        return NULL;

    newNode->data = data;
    newNode->next = NULL;

    return newNode;
}

Node* reverseList(Node *head)
{
    Node *prev = NULL;
    Node *current = head;

    while (current != NULL)
    {
        Node *next = current->next;

        current->next = prev;

        prev = current;
        current = next;
    }

    return prev;
}

void printList(Node *head)
{
    while (head != NULL)
    {
        printf("%d ", head->data);
        head = head->next;
    }

    printf("\n");
}

int main()
{
    Node *head1 = createNode(1);

    head1->next = createNode(2);
    head1->next->next = createNode(3);
    head1->next->next->next = createNode(4);
    head1->next->next->next->next = createNode(5);

    printf("Test Case 1: ");
    head1 = reverseList(head1);
    printList(head1);

    Node *head2 = createNode(1);

    printf("Test Case 2: ");
    head2 = reverseList(head2);
    printList(head2);

    return 0;
}