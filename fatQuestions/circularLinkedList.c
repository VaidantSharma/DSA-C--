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
    newNode->next = head;
    return newNode;
}

void insertAtEnd(int data){
    Node *newode = createNode(data);
    if(head==NULL){
        head = newode;
        newode->next = head;
    }else{
        Node *temp = head;
        while(temp ->next != head){
            temp = temp->next;
        }
        temp->next = newode;
        newode->next = head;
    }
}

void deleteAtEnd(){
    if(head==NULL){
        printf("List is empty");
    }else{
        Node *temp = head;
        Node *prev = NULL;
        while(temp->next!=head){
            prev = temp;
            temp = temp->next;
        }
        prev->next = head;
        free(temp);
    }
}

void insertAtBegin(int data){
    Node *newNode = createNode(data);
    if(head==NULL){
        head = newNode;
        newNode->next = head;
    }else{
        Node *temp = head;
        while(temp->next!=head){
            temp = temp->next;
        }
        temp->next = newNode;
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
        Node *temp1 = head;
        while(temp1->next!=temp){
            temp1 = temp1->next;
        }   
        temp1->next = head;
        free(temp);
    }
}

void display(){
    if(head==NULL){
        printf("List is empty");
        return;
    }
    Node *temp = head;
    do{
        printf("%d->", temp->data);
        temp = temp->next;
    } while(temp!=head);
    printf("Head\n");
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

