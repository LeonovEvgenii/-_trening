// Реализуйте поиск в глубину (DFS) для простого графа.

#include <iostream>
#include <vector>
#include <stack>

class Graph
{
    public:
        Graph(int p_count_vertices)
        {
            count_vertices = p_count_vertices;
            adjacency_vector.resize(count_vertices);
        }

        void add_edge(int v_start, int v_end)
        {
            adjacency_vector[v_start].push_back(v_end);
        }

        void dfs(int start_vertex)
        {
            std::vector<bool> visited(count_vertices, false);
            std::stack<int> memory_stack;

            memory_stack.push(start_vertex);

            while ( ! memory_stack.empty() )
            {
                int vertex = memory_stack.top();
                memory_stack.pop();

                if ( ! visited[vertex])
                {
                    visited[vertex] = true;
                    std::cout << "обработка вершины " << vertex << "\n";
                }

                for (int neighbor : adjacency_vector[vertex])
                {
                    if ( ! visited[neighbor])
                    {
                        memory_stack.push(neighbor);
                    }
                }

            }
            
        }

    protected:
        int count_vertices;
        std::vector<std::vector<int>> adjacency_vector;
};

int main()
{
    Graph g(5);

    g.add_edge(0,1);
    g.add_edge(0,2);
    g.add_edge(1,3);
    g.add_edge(1,4);
    g.add_edge(2,4);

    g.dfs(0);

    std::cout << "hw\n";
    return 0;
}

