struct node
{
    int data;
    struct node *next;
};
struct graph
{
    int numvertices;
    struct node **adjlist;
}

struct graph *creategraph(,int vertices)
{
struct graph *g=(struct graph *)malloc(sizeof(struct graph));
g->numvertices=vertices;

g->adjlist=malloc(vertices*sizeof(struct node));

for (int i = 0; i < vertices; i++)
{
    g->adjlist[i]=NULL;
}

}

int main(){

struct graph *Graph=creategraph(6);
addedge(Graph,0,1);

    return 0;
}