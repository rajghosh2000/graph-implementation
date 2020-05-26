#include<iostream>

using namespace std;

int main()
{
    int deg, i, j, v;
    printf("\nHow Many Vertices ? : ");
    scanf("%d", &v);
    int adjmat[v][v];
    int r;
    printf("Enter 1 if there exits an edge and then the weight or 0 for no edge");
    for(i=0;i<v;i++)
    {
        for(j=0;j<v;j++)
        {
            if(i==j)
            {
                adjmat[i][j]=0; //all diagnal elements of a undirected graph is 0
                //continue;
            }
            else
            {
                printf("\n Is %d and %d connected by an edge :",i,j);
                scanf("%d",&r);

                if(r==1)
                    {
                        printf("       Weight of the edge %d and %d : ",i,j);
                        scanf("%d",&adjmat[i][j]);
                    }
                else
                    {
                        adjmat[i][j]=0;
                    }
            }
         }

            
    }
    
    for(i=0;i<v;i++)
    {
        for(j=0;j<v;j++)
        {
            printf("%d\t",adjmat[i][j]);
        }
        printf("\n");
    }
}
