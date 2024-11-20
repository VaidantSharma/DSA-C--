#include<stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void BFS(int graph[6][6], int start){
    bool visited[6] = {false};
    int queue[6], front = 0, rear = 0;
    queue[rear++] = start;
    visited[start] = true;
    int curr = queue[front];
    while(front<rear){
        for (int i = 0; i<6 ; i++){
            if(graph[curr][i]!=0 && visited[i]==false){
                queue[rear++] = i;
                visited[i] = true;
            }
            
        }
        printf("%d ", curr);
        curr = queue[++front];
    }

}

int main(){
    int graph[6][6] ={{0, 1, 1, 0, 0, 0},
                      {1, 0, 0, 1, 0, 0},
                      {1, 0, 0, 0, 0, 0},
                      {0, 1, 0, 0, 0, 1},
                      {0, 0, 0, 0, 0, 1},
                      {0, 0, 0, 1, 1, 0}};
    printf("Enter the starting vertex: ");
    int start;
    scanf("%d", &start);
    BFS(graph, start);

}