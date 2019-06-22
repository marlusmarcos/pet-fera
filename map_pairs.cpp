#include <iostream>
#include <utility>
#include <string>
#include <map>
#include <memory>

using namespace std;

class Base {
    protected:
        int base_value;
    public:
        void setBase(int base){ base_value = base; }
        int getBase(){ return this->base_value; }
        virtual string getnome() = 0;
        Base(){};
};

class Filha : public Base {
    private:
        string nome = "Filha";
        int filha_value;
    public:
        string getnome(){ return this->nome; }
        void setFilhaValue(int filha_value){ this->filha_value = filha_value; }
        int getFilhaValue(){ return this-> filha_value; }
};

class Filha2 : public Base {
    private:
        string nome = "Filha2";
        int filha_value2;
    public:
        string getnome(){ return this->nome; }
        void setFilhaValue2(int filha_value2){ this->filha_value2 = filha_value2; }
        int getFilhaValue2(){ return this-> filha_value2; }
};


class Gestor {
    private:
        map<pair<int, string>, Base*> map_filhas;
    public:
        void inserir();
        void setarFilha();
        void setarFilha2();
        void imprimir();
        void deletar();
        void menu();
};

void Gestor::inserir(/*nome_classe*/){
    while(1){
        int ch;
        cout << "#####Inserção#####\n" << "0. sair\n" << "1. Filha\n" << "2. Filha2" << endl;
        cin >> ch;
        switch(ch){
            case(0):
                return;
            case(1):
                setarFilha();
                break;
            case(2):
                setarFilha2();
                break;
            default:
                cout << "Entrada Inválida" << endl;
                break;
        }
    }
}

void Gestor::setarFilha(){
    int id, a;
    Filha * filha = new Filha;
    cout << "digite o id da filha1: ";
    cin >> id;
    cout << "digite o valor da filha1: ";
    cin >> a;
    filha->setFilhaValue(a);
    map_filhas.insert(make_pair(make_pair(id, filha->getnome()), filha));
    //verificar se a inserção foi bem sucedida
    //delete filha;
}

void Gestor::setarFilha2(){
    int id, a;
    Filha2 * filha2 = new Filha2;
    cout << "digite o id da filha2: ";
    cin >> id;
    cout << "digite o valor da filha2: ";
    cin >> a;
    filha2->setFilhaValue2(a);
    map_filhas.insert(make_pair(make_pair(id, filha2->getnome()), filha2));
    //verificar se a inserção foi bem sucedida
    //delete filha2;
}

void Gestor::imprimir(){
    for(auto it : map_filhas){
        Filha * filha = nullptr;
        Filha2 * filha2 = nullptr;

        if(it.first.second == "Filha"){
            //cout << "passou1" << endl;
            filha = dynamic_cast<Filha*>(it.second);
            cout << "Converteu a Base para " << filha->getnome() << endl;
            cout << "filha_value: " << filha->getFilhaValue() << endl;
        }

         if(it.first.second == "Filha2"){
            //cout << "passou2" << endl;
            filha2 = dynamic_cast<Filha2*>(it.second);
            cout << "Converteu a Base para " << filha2->getnome() << endl;
            cout << "filha_value2: " << filha2->getFilhaValue2() << endl;
        }
    }
}

void Gestor::deletar(){
    cout << "###Deletando todos os ponteiros do map###" << endl;
    for(auto it : map_filhas){
        delete it.second;
    }
}

void Gestor::menu(){
    while(1){
        int ch;
        cout << "#####MENU#####\n" << "0. Encerrar Programa\n" << "1. Inserir\n" << "2. Imprimir" << endl;
        cin >> ch;
        switch(ch){
            case(0):
                return;
            case(1):
                inserir();
                break;
            case(2):
                imprimir();
                break;
            default:
                cout << "Entrada Inválida" << endl;
                break;
        }
    }
}

//unique_ptr<Filha> ptr1(new Filha);

int main(){
    Gestor g;
    g.menu();
    g.deletar();

    return 0;
}
