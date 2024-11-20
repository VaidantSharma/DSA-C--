#include<stdio.h>
#include<string.h>
#include<ctype.h>
int pred(char c){
    if(c=='^')
    return 3;
    else if(c=='*' || c=='/'){
        return 2;
    }else if(c=='+' || c=='-'){
        return 1;
    }else{
        return -1;
    }
}

void infixToPostfix(char *exp){
    int len = strlen(exp);
    char stack[len];
    int top = -1;
    char postfix[len+1];
    int j = 0;
    for (int i = 0; i<len; i++){
        char c = exp[i];
        if(isalnum(c)){
            postfix[j++] = c;
        }else if(c=='('){
            stack[++top] = c;
        }else if(c==')'){
            while(top!=-1 && stack[top]!='('){
                postfix[j++] = stack[top--];
            }
            if(top!=-1){
                top--;
            }
        }else{
            while(top!=-1 && pred(stack[top])>=pred(c)){
                postfix[j++] = stack[top--];
            }
            stack[++top] = c;
        }
    }
    while(top!=-1){
        postfix[j++] = stack[top--];
    }
    postfix[j] = '\0';
    printf("%s", postfix);
}

int main(){
    char exp[] = "a+b*(c^d-e)^(f+g*h)-i";
    infixToPostfix(exp);
    return 0;
}