#ifndef GRAFO
#define GRAFO

#include <vector>
#include <string>

class Grafo{
    public:
    Grafo(int v);

    void add_arestas(int a1, int a2);

    void dupla_vizinha(int v1, int v2);
    
    void vizinhos(int v);
    
    ~Grafo();
   
    private:
    int vertice;
    std::vector<int> arestas;
    
    

};




#endif
