#ifndef ESTAGIARIO
#define ESTAGIARIO

#include <string>
#include "funcionario.hpp"

class Estagiario: public Funcionario{

    public:

    Estagiario(int id,std::string nome ,double salarioFixo );
    double calcularSalarioTotal() override;
    ~Estagiario();
    
    private:
    double salarioFixo;
   

};




 



#endif