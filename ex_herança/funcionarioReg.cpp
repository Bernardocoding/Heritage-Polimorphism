#include <iostream>
#include <string>
#include "funcionarioReg.hpp"

FuncionarioReg::FuncionarioReg(int id,std::string nome ,double salarioBase):
Funcionario( id, nome ,salarioBase){
    
}

 double FuncionarioReg::calcularSalarioTotal(){
    
    std::cout<<"Salario: "<<salarioBase;
    return salarioBase;

}

FuncionarioReg::~FuncionarioReg(){
    std::cout<<nome<<" desalocado"<<std::endl;
}