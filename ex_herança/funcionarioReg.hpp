#ifndef FUNCIONARIOREG
#define FUNCIONARIOREG

#include <string>
#include "funcionario.hpp"

class FuncionarioReg: public Funcionario{

    public:
    FuncionarioReg(int id,std::string nome ,double salarioBase );
    double calcularSalarioTotal() override;
    ~FuncionarioReg();
   

};




 



#endif