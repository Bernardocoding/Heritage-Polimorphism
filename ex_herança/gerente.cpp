#include <iostream>
#include <string>
#include "gerente.hpp"

Gerente::Gerente(int id,std::string nome ,double salarioBase,double bonus ): Funcionario( id, nome ,salarioBase),
bonus(bonus) 
{
    
}

 double Gerente::calcularSalarioTotal(){
    double total= salarioBase+bonus;
    std::cout<<"Salario: "<<total<<std::endl;
    return total;

}
double Gerente::getBonus(){
    std::cout<<bonus<<std::endl;
    return bonus;
}
void Gerente::setBonus(double bonus){
    this->bonus=bonus;
}
Gerente::~Gerente(){
    std::cout<<nome<<" desalocado"<<std::endl;
}