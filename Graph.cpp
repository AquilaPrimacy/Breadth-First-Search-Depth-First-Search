class Graph
{
private:
    int num_of_vertices;
    vector<int> *Adj;
public:
    Graph(int V);
    void addEdge(int from, int to);
    void BFS(int Start);
    void DFS(int Start);
};

Graph::Graph(int V)
{
    this->num_of_vertices = V;
    Adj = new vector<int>[V];
}
void Graph::addEdge(int from, int to)
{
    Adj[from].push_back(to);
}

void Graph::BFS(int Start)
{
    bool* visited = new bool[this->num_of_vertices]();
    queue<int> queue;
    queue.push(Start);
    vector<int>::iterator i;
    cout << "BFS: ";
    while(!queue.empty())
    {
        Start = queue.front();  
        cout << Start << " ";
        visited[Start] = true;
        queue.pop();
        for (i = Adj[Start].begin(); i != Adj[Start].end(); i++)
        {
            if (!visited[*i])
                queue.push(*i);
        }
    }
    cout << endl;
    system("pause");
}

void Graph::DFS(int Start)
{
    bool* visited = new bool[this->num_of_vertices]();
    stack<int> stack;
    stack.push(Start);
    vector<int>::iterator i;
    cout << "DFS: ";
    while(!stack.empty())
    {
        int top = stack.top();
        cout << top << " ";
        stack.pop();
        visited[top] = true;
        for(i = Adj[top].begin(); i != Adj[top].end(); i++)
        {
            if (!visited[*i])
                stack.push(*i);
        }
    }
    cout << endl;
    system("pause");
}
