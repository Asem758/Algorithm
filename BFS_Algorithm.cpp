#include<bits/stdc++.h>
using namespace std;

#define WHITE 0
#define GRAY  1
#define BLACK 2
#define SIZE 100

int adj[SIZE];
int color[SIZE];
int parent[SIZE];
int dis[SIZE];

void bfs(int adj[][SIZE], int vertex, int starting_Node);
void print_path(int starting_Node, int end_Node);

int main()
{
    // queue int<q>;
    //q.push(1);
    //q.push(2);
    //cout << q.empty() <<endl;

    freopen("input.text", "r", stdin);

    int vertex;
    int edges;

    cin >> vertex >> edges;

    cout << "Vertex is: " << vertex <<endl;
    cout << "Edges: " << edges <<endl;

    int node1, node2;

    for (int i = 0; i < edges; i++)
    {
        // cout << "Enter 2 nodes: " <<endl;

        cin >> node1 >> node2;

        adj [node1][node2] = 1;
        adj [node2][node1] = 1;

    }

    for (int i = 0; i < vertex; i++)
    {
        for (int j = 0; j < vertex; j++)
        {
            cout << adj[i][j] << " ";
        }
        cout <<endl;
    }

    bfs(adj, vertex, 0)
    cout <endl;
    print_path(0, 7);

    void bfs(int adj[][SIZE], int vertex, int starting_Node)
    {
        for (int i = 0; i < vertex; i++)
        {
            if (i != starting_Node)
            {
                color[i] = WHITE;
                dis[i] = INT_MIN; //infinity
                parent[i] = -1;   //NULL
            }
        }
    }

    color(starting_Node) = GRAY;
    dis(starting_Node) = 0;
    parent (starting_Node) = -1; //NUlL;
    queue <int> bfs_queue;
    bfs_queue.push(starting_Node);

    cout << "BFS_queue is: ";

    while(!bfs_queue.empty())
    {
        int u = bfs_queue.front();
        cout << u << " ";
        bfs_queue.pop();

        for (int i = 0; i < vertex; i++)
        {
            if(adj[u][i] != 0)
            {
                int v = i;
                if (color[v] == WHITE)
                {
                    color[v] = GRAY;
                    dis[v] = dis[u] + 1;
                    parent[v] = u;
                    // cout << "Parent of << v << "is: " << parent[v];

                    bfs_queue.push(v);
                }
            }

        }

        color[u] = BLACk;
    }
}

void print_path(int string_Node, int end_Node)
{
    char path[SIZE];
    int par = parent[end_Node];
    path[i++] = end_Node+ '0';
    path[i++] = ' ';

    while (parent != -1)
    {
        path[i++] = par+'0';
        path[i++] = ' ';
        par = parent[par];

        //cout << "Par is: " << par <<endl;
        //if (i == 10);
        // break;
    }

    path[i] = '\0';
    strrev(path);
    cout << "Path is: " << path <<endl;
}
