#include <iostream>
#include<map>

using namespace std;

class Base {
    protected:
        int value_base;
    public:
        void setValueBase(int value_base);
        virtual int getValueBase(){ return 0; };
        Base(){};
        Base(int value_base);
};

void Base::setValueBase(int value_base){
    this->value_base = value_base;
}

Base::Base(int value_base){
    this->value_base = value_base;
}

class Derivada : public Base{
    protected:
        int value_derivada;
    public:
        //deve ter a implementação de métodos virtuais da classe base em classes derivadas
        int getValueBase();
        void setValueDerivada(int value);
        int getValueDerivada();
        Derivada(){};
        Derivada(int value_base, int value_derivada);
};

void Derivada::setValueDerivada(int value_derivada){
    this->value_derivada = value_derivada;
}

int Derivada::getValueBase(){
    return this->value_base;
}

int Derivada::getValueDerivada(){
    return this->value_derivada;
}

Derivada::Derivada(int value_base, int value_derivada){
    this->value_base = value_base;
    this->value_derivada = value_derivada;
}

//inicializa valores de membros da classe derivada no map
void Inserir(int a, int b){
    //aloca a memória para a classe derivada e inicializa seu construtor
    Derivada * derivada = new Derivada(a, b);

    //converte o ponteiro de classe Derivada para de classe Base (upcasting)
    Base * base = derivada;

    //cria um map para armazenar objetos das classes derivadas
    map<int, Base *> ClassesDerivadas;

    //insere um par chave-ponteiro para base no map
    ClassesDerivadas.insert(pair<int, Base *>(1, base));

    for(auto it : ClassesDerivadas){
        /*converte o ponteiro da classe base para um ponteiro classe derivada
        só funciona se a base tiver métodos virtuais*/
        Derivada * derivada = dynamic_cast<Derivada*>(it.second);

        //imprime os valores dos membros da classe derivada
        cout << derivada->getValueBase() << endl;
        cout << derivada->getValueDerivada() << endl;
    }
    delete derivada;
}

int main(){
    Inserir(1,2);
    return 0;
}
