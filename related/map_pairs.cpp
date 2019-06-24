#include <iostream>
#include <utility>
#include <string>
#include <map>

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
        map<int, int> indices_Filha = {{0,0}};//colocar no construtor padrao pra setar com esses valores iniciais!!!
        map<int, int> indices_Filha2 = {{0,0}};
    public:
        void inserir();
        void setarFilha();
        void setarFilha2();
        void imprimirTodos();//reunir todos as funcoes imprimir em uma só
        void imprimirClasse();
        void imprimirClass1();
        void imprimirClass2();
        //void Imprimir(); //imprime os membros da classe base usando a imprimir dela;
        //imprime os outros membros usando a imprimir da classe filha
        void deletar();
        void menu();
};

void Gestor::inserir(/*nome_classe*/){
    while(1){
        int ch;
        cout << "#####Inserção#####\n" << "0. Voltar\n" << "1. Inserir Filha\n"
        << "2. Inserir Filha2" << endl;
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
    cout << "digite o valor da filha1: ";
    cin >> a;
    filha->setFilhaValue(a);
    //codigo repetitivo. dá pra criar um metodo com os argumentos
    map_filhas.insert(make_pair(make_pair(++indices_Filha[0], filha->getnome()), filha));
    indices_Filha.insert(make_pair(indices_Filha[0], indices_Filha[0]));
    //verificar se a inserção foi bem sucedida
}

void Gestor::setarFilha2(){
    int id, a;
    Filha2 * filha2 = new Filha2;
    cout << "digite o valor da filha2: ";
    cin >> a;
    filha2->setFilhaValue2(a);
    map_filhas.insert(make_pair(make_pair(++indices_Filha2[0], filha2->getnome()), filha2));
    indices_Filha2.insert(make_pair(indices_Filha2[0], indices_Filha2[0]));
    //verificar se a inserção foi bem sucedida
}

void Gestor::imprimirTodos(){
    for(auto it : map_filhas){
        if(it.first.second == "Filha"){
            Filha* filha = dynamic_cast<Filha*>(it.second);
            cout << "Classe: " << filha->getnome() << endl;
            cout << "filha_value: " << filha->getFilhaValue() << endl;
        }

         if(it.first.second == "Filha2"){
            Filha2* filha = dynamic_cast<Filha2*>(it.second);
            cout << "Classe: " << filha->getnome() << endl;
            cout << "filha_value2: " << filha->getFilhaValue2() << endl;
        }
    }
}
void Gestor::imprimirClass1(){//eh possivel usar template aqui para substituir o "filha"?
    string nome_classe = "Filha";
    for(auto it : indices_Filha){
        if(it.first != 0){
            Filha * filha = dynamic_cast<Filha*>(map_filhas[{it.first, nome_classe}]);
            cout << "Classe: " << filha->getnome() << endl;
            cout << "filha_value2: " << filha->getFilhaValue() << endl;
        }
    }
}

void Gestor::imprimirClass2(){//generalizar o código
    string nome_classe = "Filha2";
    for(auto it : indices_Filha2){
        if(it.first != 0){
            Filha2 * filha = dynamic_cast<Filha2*>(map_filhas[{it.first, nome_classe}]);
            cout << "Classe: " << filha->getnome() << endl;
            cout << "filha_value2: " << filha->getFilhaValue2() << endl;
        }
    }
}

void Gestor::imprimirClasse(){
    while(1){
        int ch;
        string nome_classe;
        cout << "0. Voltar\n" << "1. Imprimir as classes do tipo Filha\n"
        << "2. Imprimir as classes do tipo Filha2" << endl;
        cin >> ch;
        switch(ch){
            case 0:
                return;
                break;
            case 1:
                imprimirClass1();
                break;
            case(2):
                imprimirClass2();
                break;
            default:
                cout << "Entrada Inválida" << endl;
                break;
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
        cout << "#####MENU#####\n" << "0. Encerrar Programa\n" << "1. Inserir\n"
        << "2. Imprimir Todos\n" << "3. Imprimir Classe Espeficica" << endl;
        cin >> ch;

        switch(ch){
            case(0):
                return;
            case(1):
                inserir();
                break;
            case(2):
                imprimirTodos();
                break;
            case(3):
                imprimirClasse();
                break;
            default:
                cout << "Entrada Inválida" << endl;
                break;
        }
    }
}

int main(){
    Gestor g;
    g.menu();
    g.deletar();

    return 0;
}
