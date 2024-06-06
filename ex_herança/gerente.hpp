#ifndef GERENTE
#define GERENTE

#include <string>
#include "funcionario.hpp"

class Gerente: public Funcionario{

    public:
    Gerente(int id,std::string nome ,double salarioBase,double bonus );
    double calcularSalarioTotal() override;
    

   
    ~Gerente();

    private:
    double getBonus();
    void setBonus(double bonus);
    double bonus;

    

};


 


#endif