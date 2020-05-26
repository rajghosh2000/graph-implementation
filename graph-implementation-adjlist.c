#include<stdio.h>
#include<stdlib.h>
#define max_Node 5

typedef struct Node 
{
    int v_num;
    struct node *next
} Node;

typedef struct List
{
    Node *head;
} List;

List *adjList[max_Node] = {0}; // Initializing the v_num in the list with zeros


void addNode(int s,int d)
{ // s---> source // d--> destination
    Node *dest , *t , *src;


    if(adjList[s]->head == NULL)
    {
        src = (Node*)malloc(sizeof(Node));
        src->v_num = s;
        src->next = NULL;
        adjList[s]->head = src;
    }

    dest = (Node*)malloc(sizeof(Node));
    dest->v_num = d;
    dest->next = NULL;

    t = adjList[s]->head;
    while(t->next!=NULL)
    {
        t=t->next;
    }
    t->next = dest;

}

void printList()
{
    int i=0;
    while(i<max_Node)
    {
        Node *t = adjList[i]->head;

        printf("Adjacency List of vertex %d --> ",i);

        while(t!=NULL)
        {
            printf("%d ",t->v_num);
            t = t->next;
        }
        printf("\n");
        i++;
    }
}

int main()
{
    int i;
    for(i=0;i<max_Node;i++){
        adjList[i] = (List*)malloc(sizeof(List));
        adjList[i]->head=NULL;
    }


    addNode(0,1);
    addNode(1,2);
    addNode(3,2);
    addNode(2,1);
    addNode(4,3);

    printList();

}