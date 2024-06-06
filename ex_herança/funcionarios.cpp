#include<iostream>
#include <string>
#include "funcionario.hpp"


Funcionario::Funcionario(int id,std::string nome ,double salarioBase){
    this->id=id;
    this->nome=nome;
    this->salarioBase=salarioBase;

};
Funcionario::Funcionario(int id,std::string nome ){
    this->id=id;
    this->nome=nome;
    

};

int Funcionario::getId(){
    std::cout<<id<<std::endl;
    return id;
};

std::string Funcionario:: getNome(){
    std::cout<<nome<<std::endl;
    return nome;

}
double Funcionario::getSalarioBase(){
    std::cout<<salarioBase<<std::endl;
    return salarioBase;
 }

void Funcionario::setId(int id){
    this->id=id;
 
   
};

void Funcionario:: setNome(std::string nome){
    this->nome=nome;

}
void Funcionario::setSalarioBase(double salaraioBase){
   this->salarioBase=salaraioBase;
 }



 