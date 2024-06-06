#include <iostream>
#include <string>
#include <vector>
#include "van.hpp"
#include "caminhao.hpp"

int main(){
    Caminhao cIveco("Iveco","300A",5000,3);
    Van vFiat("Ducato","2.3 TD",1300,18);
    Caminhao cVolco("Volvo","CX300",20000,4);
    Van vMercedes("Sprinter","2.2 TD Arla",1250,15);
    std::vector<Veiculo*> v;
    v.push_back(&cIveco);
    v.push_back(&vFiat);
    v.push_back(&cVolco);
    v.push_back(&vMercedes);

    for(auto &ptr : v){
        ptr->exibirDados();
    }



    return 0;
}
