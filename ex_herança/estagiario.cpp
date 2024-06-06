#include <iostream>
#include <string>
#include "estagiario.hpp"

Estagiario::Estagiario(int id,std::string nome ,double salarioFixo):
Funcionario(id, nome),salarioFixo(salarioFixo){
    
}

 double Estagiario::calcularSalarioTotal(){
    
    std::cout<<"Salario: "<<salarioFixo<<std::endl;
    return salarioFixo;

}

Estagiario::~Estagiario(){
    std::cout<<nome<<" desalocado"<<std::endl;
} 