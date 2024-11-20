#include<stdio.h>
#include <stdlib.h>

typedef struct Node{
    int data;
    struct Node *next;
}Node;

Node *head = NULL;

Node *createNode(int data){
    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

void insertAtEnd(int data){
    Node *newode = createNode(data);
    if(head==NULL){
        head = newode;
    }else{
        Node *temp = head;
        while(temp ->next != NULL){
            temp = temp->next;
        }
        temp->next = newode;
    }
}

void deleteAtEnd(){
    if(head==NULL){
        printf("List is empty");
    }else{
        Node *temp = head;
        Node *prev = NULL;
        while(temp->next!=NULL){
            prev = temp;
            temp = temp->next;
        }
        prev->next = NULL;
    }
}

void insertAtBegin(int data){
    Node *newNode = createNode(data);
    if(head==NULL){
        head = newNode;
    }else{
        newNode->next = head;
        head = newNode;
    }
}

void deleteAtBegin(){
    if(head==NULL){
        printf("List is empty");
    }else{
        Node *temp = head;
        head = head->next;
        free(temp);
    }
}

void display(){
    Node *temp = head;
    while(temp!=NULL){
        printf("%d->", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main(){
    int option, num;
    printf("Press 1 to insert at end\nPress 2 to delete at end\nPress 3 to insert at begin\nPress 4 to delete at begin\nPress 5 to display\nPress 6 to exit\nEnter your choice:");
    scanf("%d", &option);
    while(option!=6){
        switch (option){
        case 1:
            printf("Enter the number: ");
            scanf("%d", &num);
            insertAtEnd(num);
            break;
        case 2:
            deleteAtEnd();
            break;
        case 3:
            printf("Enter the number: ");
            scanf("%d", &num);
            insertAtBegin(num);
            break;
        case 4:
            deleteAtBegin();
            break;
        case 5:
            display();
            break;
        default:
            printf("Invalid choice");
            break;
        }
        printf("Enter the choice:");
        scanf("%d", &option);
    }
}

