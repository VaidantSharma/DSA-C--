#include<stdio.h>
#define size 10 

int main(){
    int stack[size], option,top = -1 ; 
    printf("Press 1 to Push\nPress 2 to Pop\nPress 3 to Peek\nPress 4 to exit\nEnter your choice:");
    scanf("%d", &option);
    while(option!=4){
        switch (option){
        case 1:if(top==size-1){
            printf("stack overflow ");
        }else{
            int num ; 
            printf("Enter the number: ");
            scanf("%d", &num);
            top++;
            stack[top] = num ;
        }
            break;
        case 2: if(top==-1){
            printf("Stack empty");
        }else{
            int temp = stack[top];
            printf("Popped element is %d", temp);
            top--;
        }
            break;
        case 3 :if(top==-1){
            printf("Stack empty");
        }else{
            printf("%d", stack[top]);
        } 
        break;
        default:printf("Invalid choice");
            break;
        }
        printf("Enter the choice:");
        scanf("%d", &option);
    }
}