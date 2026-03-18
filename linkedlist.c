#include<stdio.h>
#include<stdlib.h>
struct Node {
	int data;
	struct Node *next;
};
int main()
{
	struct Node *head = malloc(sizeof(struct Node));
	struct Node *second = malloc(sizeof(struct Node));
	struct Node *third = malloc(sizeof(struct Node));

    head->data = 10;
    second->data = 20;
    third->data = 30;

    head->next = second;
    second->next = third;
    third->next = NULL;

    struct Node *temp = head;
    while (temp != NULL)
    {
    	printf("%d ->",temp->data);
    	temp = temp->next;
    }
    printf("NULL\n");

}
