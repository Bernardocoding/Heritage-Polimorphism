#ifndef FUNCIONARIO
#define FUNCIONARIO
#include <iostream>
#include <string>


class Funcionario
{
public:
    Funcionario(int id,std::string nome);
    Funcionario(int id,std::string nome ,double salarioBase);
    virtual double calcularSalarioTotal()=0;
    int getId();
    std::string getNome();
    double getSalarioBase();
    void setId(int id);
    void setNome(std::string nome);
    void setSalarioBase(double salaraioBase);
    
    


protected:
    std::string nome;
    int id;
    double salarioBase;


};
#endif