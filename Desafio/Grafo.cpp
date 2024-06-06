#include <iostream>
#include "Grafo.hpp"
#include <vector>
#include <string>
#include <stdexcept>


Grafo::Grafo(int v): 
vertice(v){
    
};
void Grafo::add_arestas(int a1, int a2){
    try{
    this->arestas.push_back(a1);
    this->arestas.push_back(a2);
    std::cout<<"\n"<<"aresta "<<a1<<' '<<a2<<" inserida no vetor"<< std::endl;
    for(auto& n:arestas){
        std::cout<<" /"<<n;

    }
    std::cout<<'\n';
    }
    catch(std::exception& e){
    std::cout<<"Erro ao inserir aresta "<<a1<<' '<<a2<<" no vetor"<<e.what()<< std::endl;
    }
     
    
}




void Grafo::dupla_vizinha(int v1,int v2){
    /*inicializar a matriz com 0*/
    int matriz[vertice][vertice];
    for (int l=0;l<vertice;l++){
        for(int c=0; c<vertice; c++){
            matriz[l][c]=0;
        }

    }
    /*percorrer o vetor e preencher as arestas na matriz*/
    for(int a=0;a!=arestas.size();a+=2){
       
        matriz[arestas[a]-1][arestas[a+1]-1]=1;
        matriz[arestas[a+1]-1][arestas[a]-1]=1;

    }
    for(int l=0;l<vertice;l++){
        for(int c=0;c<vertice;c++){
            std::cout<<matriz[l][c]<<' ';
        }
        std::cout<<"\n";
    }
    std::cout<<"\n";
    /*acessar a matriz em busca do par de arestas */
    if (matriz[v1-1][v2-1]!=0){

        std::cout<<v1<<' '<<v2<<' '<<"vértices vizinhos"<<std::endl;

    }
    else{
        std::cout<<v1<<' '<<v2<<' '<<"vértices não são vizinhos"<<std::endl;
    }
    std::cout<<"\n";



}

void Grafo::vizinhos(int v){
    
    /*inicializar a matriz com 0*/
    int matriz[vertice][vertice];
    for (int l=0;l<vertice;l++){
        for(int c=0; c<vertice; c++){
            matriz[l][c]=0;
        }

    }
    /*percorrer o vetor e preencher as arestas na matriz*/
    for(int a=0;a!=arestas.size();a+=2){
       
        matriz[arestas[a]-1][arestas[a+1]-1]=1;
        matriz[arestas[a+1]-1][arestas[a]-1]=1;

    }

     std::cout<<"o vizinhos de "<<v<<" são ";

    for(int i=0;i<vertice;i++){
        if (matriz[v-1][i]!=0){
            
            std::cout<<i+1<<',';
            
        }
        

    }
    std::cout<<"\n";
    
    
    

}
 Grafo::~Grafo(){
    std::cout<<"Destruído"<<std::endl;
 }


