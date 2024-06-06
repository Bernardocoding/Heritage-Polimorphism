#include <iostream>
#include "Grafo.hpp"

int main()
{
    Grafo g(5);
     g.add_arestas(1, 2);
    g.add_arestas(1, 5);
    g.add_arestas(2, 3);
    g.add_arestas(2, 4);
    g.add_arestas(2, 5);
    g.add_arestas(3, 4);
    g.add_arestas(4, 5);

    // g.dupla_vizinha(2, 1);
    // g.dupla_vizinha(5, 1);
    // g.dupla_vizinha(3,2);
    // g.dupla_vizinha(4,2);
    // g.dupla_vizinha(5,2);
    // g.dupla_vizinha(4,3);
    // g.dupla_vizinha(5,4);

    g.vizinhos(1);
    g.vizinhos(2);
    g.vizinhos(3);
    g.vizinhos(4);
    g.vizinhos(5);
  
return 0;
}