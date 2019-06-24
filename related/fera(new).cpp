#include <string>
#include <iostream>
#include <map>
using namespace std;
class Funcionario {
	protected:
		int id;
		string nome;
		string cpf;
		short int idade;
		short int tipo_sanguineo;
		char fator_rh;
		string especialidade;
	public:
	    Funcionario(void);
		Funcionario(int id, string nome, string cpf, short int idade, short int tipo_sanguineo,	char fator_rh, string especialidade);
        ~Funcionario();
		void setId(int id);
		int getId();
		void setNome(string nome);
		string getNome();
		void setCpf(string cpf);
		string getCpf();
		void setIdade(short int idade);
		short int getIdade();
		void setTipoSanguineo(short int tipo_sanguineo);
		short int getTipoSanguineo();
		void setFatorRh(char fator_rh);
		char getFatorRh();
		void setEspecialidade(string especialidade);
		string getEspecialidade();
};

	void Funcionario::setId(int id){
		this->id = id;
	}
	int Funcionario::getId(){
		return this->id;
	}
	void Funcionario::setNome(string nome){
		this->nome = nome;
	}
	string Funcionario::getNome(){
		return this->nome;
	}
	void Funcionario::setCpf(string cpf){
		this->cpf = cpf;
	}
	std::string Funcionario::getCpf(){
		return this->cpf;
	}
	void Funcionario::setIdade(short int idade){
		this->idade = idade;
	}
	short int Funcionario::getIdade(){
		return this->idade;
	}
	void Funcionario::setTipoSanguineo(short int tipo_sanguineo){
		this->tipo_sanguineo = tipo_sanguineo;
	}
	short int Funcionario::getTipoSanguineo(){
		return this->tipo_sanguineo;
	}
	void Funcionario::setFatorRh(char fator_rh){
		this->fator_rh = fator_rh;
	}
	char Funcionario::getFatorRh(){
		return fator_rh;
	}
	void Funcionario::setEspecialidade(string especialidade){
		this->especialidade = especialidade;
	}
	string Funcionario::getEspecialidade(){
		return especialidade;
	}
Funcionario::Funcionario(){};
Funcionario::~Funcionario(){};


class Tratador : public Funcionario {
	protected:
		int nivel_de_seguranca;
	public:
		Tratador(){};
        Tratador(int id, string nome, string cpf, short int idade, short int tipo_sanguineo,	char fator_rh, string especialidade, int nivel_de_seguranca);

		//void setNivel(int ni);
		int getNivel ();
		void Imprimir();

};
void Tratador::Imprimir() {
	cout << "ID:" << id << "\nNome: " << nome << "\nCPF: " << cpf << "\nIdade: " << idade << "\nTipo sanguíneo: " << tipo_sanguineo << "\nFator RH: " << fator_rh  << "\nEspecialidade: "
	<< especialidade << "\nNível de segurança: " << nivel_de_seguranca <<endl;
}

Tratador::Tratador(int id, string nome, string cpf, short int idade, short int tipo_sanguineo,	char fator_rh, string especialidade, int nivel_de_seguranca){
	this->id=id;
	this->nome=nome;
	this->cpf=cpf;
	this->idade=idade;
	this->tipo_sanguineo = tipo_sanguineo;
	this->fator_rh= fator_rh;
	this->especialidade=especialidade;
	this->nivel_de_seguranca=nivel_de_seguranca;
}

int Tratador::getNivel() {
	return nivel_de_seguranca;
}

class Veterinario : public Funcionario {
	private:
		string crmv;

	public:
		Veterinario(){};
		Veterinario(int id, string nome, string cpf, short int idade, short int tipo_sanguineo,	char fator_rh, string especialidade, string crmv);

		//void setCrmv(string c);
		string getCrmv ();
		void Imprimir();
};
void Veterinario::Imprimir() {
	cout << "ID:" << id << "\nNome: " << nome << "\nCPF: " << cpf << "\nIdade: " << idade << "\nTipo sanguíneo: " << tipo_sanguineo << "\nFator RH: " << fator_rh  << "\nEspecialidade: "
	<< especialidade << "\nCRMV: " << crmv <<endl;
}

Veterinario::Veterinario(int id, string nome, string cpf, short int idade, short int tipo_sanguineo,	char fator_rh, string especialidade, string crmv)
{
	this->id=id;
	this->nome=nome;
	this->cpf=cpf;
	this->idade=idade;
	this->tipo_sanguineo = tipo_sanguineo;
	this->fator_rh= fator_rh;
	this->crmv=crmv;
}
string Veterinario::getCrmv(){
	return crmv;
};

/// ================================================================================================================================================================================
///=================================================================================================================================================================================
/// =========================================================== CLASSE ANIMAL =======================================================


class Animal {
	protected:
		int id;
		string classe;
		string nome_cientifico;
		char sexo;
		double tamanho;
		string dieta;
		string nome_batismo;
		//Veterinario veterinario;
		//Tratador tratador;

	public:
		Animal(void);
		Animal(int id, string classe, string nome_cientifico, char sexo, int tamanho, string dieta, string nome_batismo);
		~Animal();
		void setId(int id);
		int getId();
		//void setClasse(std::string classe);
		string getClasse();
		//void setNomeCientifico(std::string nome_cientifico);
		string getNomeCientifico();
		//void setSexo(char sexo);
		char getSexo();
		//void setTamanho(double tamanho);
		double getTamanho();
		//void setDieta(std::string dieta);
		string getDieta();
		//void setNomeBatismo(std::string nome_batismo);
		string getNomeBatismo();
		//void setDadosBasicos();
};

Animal::Animal(){
    cout<< " Digite o id do animal: " << endl;
	cin >> this->id;
	cout<< " Digite o nome cientifico: " << endl;
	cin >> this->nome_cientifico;
	cout<< " Digite o sexo: " << endl;
	cin >> this->sexo;
	cout<< " Digite o tamanho: " << endl;
	cin >> this->tamanho;
	cout<< " Digite a dieta: " << endl;
	cin >> this->dieta;
	cout<< " Digite o nome do batismo: " << endl;
	cin >> this->nome_batismo;
};
Animal::~Animal(){};

/*
void Animal::setId(int id){
	this->id = id;
}
*/
int Animal::getId(){
	return this->id;
}
/*
void Animal::setClasse(std::string classe){
	this->classe = classe;
}
*/
std::string Animal::getClasse(){
	return this->classe;
}
/*
void Animal::setNomeCientifico(std::string nome_cientifico){
	this->nome_cientifico = nome_cientifico;
}
*/
std::string Animal::getNomeCientifico(){
	return this->nome_cientifico;
}
/*
void Animal::setSexo(char sexo){
	this->sexo = sexo;
}
*/
char Animal::getSexo(){
	return this->sexo;
}
/*
void Animal::setTamanho(double tamanho){
	this->tamanho = tamanho;
}
*/
double Animal::getTamanho(){
	return this->tamanho;
}
/*
void Animal::setDieta(std::string dieta){
	this->dieta = dieta;
}
*/
std::string Animal::getDieta(){
	return this->dieta;
}
/*
void Animal::setNomeBatismo(std::string nome_batismo){
	this->nome_batismo = nome_batismo;
}
*/
std::string Animal::getNomeBatismo(){
	return this->nome_batismo;
}

//#######################
class Animal_silvestre{
    // === Atributs ===
    private:
	std::string m_autorizacao_ibama;

	public:
	std::string get_autorizacao_ibama(void);
	Animal_silvestre();
	~Animal_silvestre(){};
	//void set_autorizacao_ibama(std::string autorizacao_ibama);
};

Animal_silvestre::Animal_silvestre(){
    cout << "Digite a autorização do ibama: ";
    cin >> this->m_autorizacao_ibama;
}

std::string Animal_silvestre::get_autorizacao_ibama(void)
{ return m_autorizacao_ibama; }

/*
void Animal_silvestre::set_autorizacao_ibama(std::string autorizacao_ibama)
{m_autorizacao_ibama = autorizacao_ibama; }
*/
//#####################################

class Animal_exotico : public Animal_silvestre{
    private:
	std::string m_pais_origem;

    public:
    // Constructors && Destructors
    Animal_exotico();
    ~Animal_exotico();

    // Getters && setters
    std::string get_pais_origem(void);
    //void set_pais_origem(std::string uf_origem);

};

Animal_exotico::Animal_exotico() : Animal_silvestre() {
    cout << "Digite o país de origem: ";
    cin >> this->m_pais_origem;
}

Animal_exotico::~Animal_exotico() = default;


std::string Animal_exotico::get_pais_origem(void)
{ return m_pais_origem; }

/*
void Animal_exotico::set_pais_origem(std::string pais_origem)
{ m_pais_origem = pais_origem; }
*/

//#######################################
class Animal_nativo : public Animal_silvestre{
    private:
	std::string m_uf_origem;
	std::string m_autorizacao;

    public:
    // Constructors && Destructors
    Animal_nativo();
    ~Animal_nativo();

    // Getters && setters
    std::string get_uf_origem(void);
    std::string get_autorization(void);
    void set_uf_origem(std::string uf_origem);
    //void set_autorizacao(std::string autorizacao);

};
Animal_nativo::Animal_nativo() : Animal_silvestre(){
    cout << "Digite a uf de origem: ";
    cin >> this->m_uf_origem;
}


Animal_nativo::~Animal_nativo() = default;


std::string Animal_nativo::get_uf_origem(void)
{ return m_uf_origem; }


std::string Animal_nativo::get_autorization(void)
{ return m_autorizacao; }

void Animal_nativo::set_uf_origem(std::string uf_origem)
{ m_uf_origem = uf_origem; }

/*
void Animal_nativo::set_autorizacao(std::string autorizacao)
{ m_autorizacao = autorizacao; }
*/

//###################################
//ANFIOBIOS

typedef struct Data{
	short int dia;
	short int mes;
	short int ano;
}Data;

class Anfibio : public Animal {
	protected:
		int total_de_mudas;
		Data ultima_muda;
	public:
		Anfibio();
		Anfibio(int id , string nome_cientifico, char sexo, int tamanho, string dieta, string nome_batismo); //aqui falta total de mudas e ultima muda
};
Anfibio::Anfibio() : Animal(){
    cout << "Digite o total de mudas: ";
    cin >> this->total_de_mudas;
    cout << "****Data da última muda****" << endl;
    cout << "Dia: ";
    cin >> this->ultima_muda.dia;
    cout << "Mês: ";
    cin >> this->ultima_muda.mes;
    cout << "Ano: ";
    cin >> this->ultima_muda.ano;
}

Anfibio::Anfibio(int id , string nome_cientifico, char sexo, int tamanho, string dieta, string nome_batismo) {
	this->id=id;
	this->nome_cientifico = nome_cientifico;
	this->sexo=sexo;
	this->tamanho=tamanho;
	this->dieta=dieta;
	this->nome_batismo = nome_batismo;
};

//ANFIBIO EXOTICO
class Anfibio_exotico : public Anfibio, public Animal_exotico {
    public:
        Anfibio_exotico();
        ~Anfibio_exotico();
};

/// Getters && Setters
Anfibio_exotico::Anfibio_exotico(): Anfibio(), Animal_exotico(){}

Anfibio_exotico:: ~Anfibio_exotico() = default;

class Anfibio_nativo : public Anfibio, public Animal_nativo {
    public:
        Anfibio_nativo();
        ~Anfibio_nativo();
};

// Constructor & Destructors
Anfibio_nativo::Anfibio_nativo()
{/*empty*/}

Anfibio_nativo::~Anfibio_nativo() = default;

//###############################

class Mamifero : public Animal {
	protected:
		string cor_pelo;
	public:
		Mamifero();
		Mamifero(int id , string nome_cientifico, char sexo, int tamanho, string dieta, string nome_batismo, string cor_pelo);
		//~Mamifero();
		//void setCorPelo();
		//std::string getCorPelo();
};
    Mamifero::Mamifero() : Animal(){
        cout << "Digite a cor do pelo: ";
        cin >> cor_pelo;
    }
	Mamifero::Mamifero(int id , string nome_cientifico, char sexo, int tamanho, string dieta, string nome_batismo, string cor_pelo){
		this->id = id;
		//this-> classe = classe;
		this->nome_cientifico = nome_cientifico;
		this->sexo=sexo;
		this->tamanho=tamanho;
		this->dieta=dieta;
		this->nome_batismo = nome_batismo;

	}

class Mamifero_exotico : public Mamifero, public Animal_exotico {
    protected:
    public:
	/// Getters && Setters
	Mamifero_exotico();
	~Mamifero_exotico();
};

// Constructor & Destructors
Mamifero_exotico::Mamifero_exotico() : Mamifero(), Animal_exotico(){}

Mamifero_exotico::~Mamifero_exotico() = default;


class Mamifero_nativo : public Mamifero, public Animal_nativo {
    protected:
    public:
	/// Getters && Setters
	Mamifero_nativo();
	~Mamifero_nativo();
};

// Constructor & Destructors
Mamifero_nativo::Mamifero_nativo() : Mamifero(), Animal_nativo(){}

Mamifero_nativo::~Mamifero_nativo() = default;

//###############################

class Reptil : public Animal {
	protected:
		bool venenoso;
		string tipo_venenoso;
	public:
		Reptil();
		Reptil(int id , string nome_cientifico, char sexo, int tamanho, string dieta, string nome_batismo,  bool venenoso, string tipo_venenoso);

};

Reptil::Reptil() : Animal(){
    cout << "Digite 1 para venenoso ou 0 para não venenoso" << endl;
	cin >> this->venenoso;
	cout << "Digite o tipo do neveno" << endl;
	cin >> this->tipo_venenoso;
}
	Reptil::Reptil(int id , string nome_cientifico, char sexo, int tamanho, string dieta, string nome_batismo, bool venenoso, string tipo_venenoso){
		this->id = id;
		//this-> classe = classe;
		this->nome_cientifico = nome_cientifico;
		this->sexo=sexo;
		this->tamanho=tamanho;
		this->dieta=dieta;
		this->nome_batismo = nome_batismo;
		this->venenoso=venenoso;
		this->tipo_venenoso=tipo_venenoso;
	}

class Reptil_exotico : public Reptil, public Animal_exotico {
    protected:
    public:
	/// Getters && Setters
	Reptil_exotico();
	~Reptil_exotico();
};

// Constructor & Destructors
Reptil_exotico::Reptil_exotico() : Reptil(), Animal_exotico(){}

Reptil_exotico::~Reptil_exotico() = default;

class Reptil_nativo : public Reptil, public Animal_nativo {
    protected:
    public:
	/// Getters && Setters
	Reptil_nativo();
	~Reptil_nativo();
};

// Constructor & Destructors
Reptil_nativo::Reptil_nativo() : Reptil(), Animal_nativo(){}

Reptil_nativo::~Reptil_nativo() = default;

//##########################
class Ave : public Animal {
	protected:
		double tamanho_do_bico;
		double envergadura_asas;
	public:
        Ave();
        Ave(int id, string nome_cientifico, char sexo, int tamanho, string dieta, string nome_batismo, double tamanho_do_bico, double envergadura_asas);

};
    Ave::Ave() : Animal(){
        cout<< " Digite o tamanho do bico: " << endl;
        cin >> this->tamanho_do_bico;
        cout<< " Digite a envergadura das asas: " << endl;
        cin >> this->envergadura_asas;
    }

    Ave::Ave(int id, string nome_cientifico, char sexo, int tamanho, string dieta, string nome_batismo, double tamanho_do_bico, double envergadura_asas) {
        this->id=id;
        this->nome_cientifico = nome_cientifico;
		this->sexo=sexo;
		this->tamanho=tamanho;
		this->dieta=dieta;
		this->nome_batismo = nome_batismo;
        this->tamanho_do_bico=tamanho_do_bico;
        this->envergadura_asas=envergadura_asas;
    }

class Ave_exotica : public Ave, public Animal_exotico {
    protected:
    public:
	/// Getters && Setters
	Ave_exotica();
	~Ave_exotica();
};
    // Constructor & Destructors
Ave_exotica::Ave_exotica() : Ave(), Animal_exotico(){}

Ave_exotica::~Ave_exotica() = default;


class Ave_nativa: public Ave, public Animal_nativo {
    protected:
    public:
	/// Getters && Setters
	Ave_nativa();
	~Ave_nativa();
};

// Constructor & Destructors
Ave_nativa::Ave_nativa() : Ave(), Animal_nativo(){}

Ave_nativa::~Ave_nativa() = default;

//###################################################

class GerenciarFuncionario {
	private:
		int id;
		string nome;
		string cpf;
		short int idade;
		short int tipo_sanguineo;
		char fator_rh;
		string especialidade;
	public:
        void tratador();
        void veterinario();
};
void GerenciarFuncionario::tratador() {
	int nivel_de_seguranca;
	cout <<"Digite o ID do Funcionario:\n";
	cin >> id;
	cout << "Digite o nome:\n";
	cin >> nome;
	cout << "Digite seu cpf:\n";
	cin >> cpf;
	cout << "Digite sua idade:\n";
	cin >> idade;
	cout << "Digite seu tipo sanguíneo:\n";
	cin >> tipo_sanguineo;
	cout << "Digite seu fator RH:\n";
	cin >> fator_rh;
	cout << "Digite sua especialidade \n";
	cin >> especialidade;
	cout << "Digite seu nível de segurança:\n";
	cin >> nivel_de_seguranca;
	Tratador *t1 = new Tratador(id, nome, cpf, idade, tipo_sanguineo,fator_rh, especialidade, nivel_de_seguranca);
	cout << "O id do tratador é: " << t1->getId() << "e seu nome é: " << t1->getNome() << "\n";
	t1->Imprimir();
}

void GerenciarFuncionario::veterinario() {
	string crmv;
	cout <<"Digite o ID do Funcionario:\n";
	cin >> id;
	cout << "Digite o nome:\n";
	cin >> nome;
	cout << "Digite seu cpf:\n";
	cin >> cpf;
	cout << "Digite sua idade:\n";
	cin >> idade;
	cout << "Digite seu tipo sanguíneo:\n";
	cin >> tipo_sanguineo;
	cout << "Digite seu fator RH:\n";
	cin >> fator_rh;
	cout << "Digite sua especialidade \n";
	cin >> especialidade;
	cout << "Digite seu crmv:\n";
	cin >> crmv;
	Veterinario *t1 = new Veterinario(id,nome,cpf, idade,tipo_sanguineo,fator_rh, especialidade,  crmv);
	cout << "O id do veterinario é: " << t1->getId() << "e seu nome é: " << t1->getNome() << endl;
	//int total = map_vet.size();
	//map_vet.insert(pair<;int, Veterinario> (0, *t1);
	t1->Imprimir();

}


class GerenciarAnimal { //essa classe serve para um suporte aoo menu, é aqui onde será colocada no map o animal
	public:
	    template<typename T>
		void mamifero();
		void ave();
		void reptil();
		void anfibio();
};

template<typename T>
void GerenciarAnimal::mamifero(){
	T *m1 = new T();
	cout << "o id do animal é: " << m1->getId() <<"\n";
	//add no map de mamifero
	delete m1;
}
void GerenciarAnimal::anfibio() {
	Anfibio *m1 = new Anfibio();
	cout << "o id do animal é: " << m1->getId() <<"\n";
	//add no map de manfibio
	delete m1;
}


void GerenciarAnimal::reptil() {
	Reptil *m1 = new Reptil();
	cout << "o id do animal é: " << m1->getId() <<"\n";
	//add no map de manfibio
	delete m1;
}



void GerenciarAnimal::ave(){
	Ave *m1 = new Ave();
	cout << "o id do animal é: " << m1->getId() <<"\n";
	//add no map de ave
	delete m1;
}

class Menu {
	public:
        void meu_menu();
		void cadastrarAnimal();
		void removerAnimal();
		void alterarAnimal();
		void consultarAnimal();
		void cadastrarFuncionario();
		void removerFuncionario();
		void alterarFuncionario();
		void consultarFuncionario();
};
void Menu::meu_menu() {
    int op;
    cout << "Digite 1 para cadastrar animal\n";
    cout <<"Digite 2 para remover um animal\n";
    cout <<"Digite 3 para alterar um animal\n";
    cout <<"Digite 4 para consultar um animal\n";
    cout <<"Digite 5 para cadastrar um funcionario\n";
    cout << "Digite 6 para remover um funcionario\n";
    cout <<"Digite 7 para alterar um Funcionario\n";
    cout << "Digite 8 para consultar um funcionario\n";
    Menu m_menu;
    cin >> op;
    switch (op) {
        case 1:
        	cout << " opção: " << op << endl;
       	 	m_menu.cadastrarAnimal();
        	break;

		case 5:
			cout << "opção : " << op << endl;
			m_menu.cadastrarFuncionario();
			break;
		default:
			//return m_menu();
			break;
	}

}


void Menu::cadastrarAnimal(){

	int entrada;
	GerenciarAnimal nome;

	cout<<"1. Mamifero " << endl;
	cout<<"2. Ave " << endl;
	cout<<"3. Anfibio " << endl;
	cout<<"4. Reptil " << endl;
    cout << "0. Voltar ao menu\n";
	cout<<"ESCOLHA A OPCAO : " << endl;
	cin>>entrada;


	switch(entrada){
    case 0:
        return meu_menu();
	case 1:
		cout << "opcao " << entrada;
		cout << "1. Mamífero Nativo\n" << "2. Mamífero Exótico" << endl;
        cin >> entrada;
        switch(entrada){
            case 1:
                nome.mamifero<Mamifero_nativo>();
                break;
        }
		//nome.mamifero();
		break;
	case 2:
		cout << " opcao " << entrada;
		nome.ave();
		break;
	case 3:
		cout << "opcao " << entrada;
		nome.anfibio();
		break;
	case 4:
		cout << "opcao " << entrada;
		nome.reptil();
		break;
	default:
		cout << "Opcao  " << entrada << " invalida. ";
		return cadastrarAnimal();
		break;


	}
};


void Menu::removerAnimal(){
	/*mostrar a opção de escolha, entre mamiferos, aves e entre outros..*/
	/*receber a entrada e printar a lista de mamiferos(exemplo), print seu nome e ID*/
	/*Receber o id, e no id faz a comparação na lista, se for igual, da um erese no map, removendo o animal da lista*/
	//TODO:


}
void Menu::alterarAnimal(){

}
void Menu::consultarAnimal(){

}
void Menu::cadastrarFuncionario(){

	int entrada = 0;
	GerenciarFuncionario nome;

	cout<<"1. Tratador " << endl;
	cout<<"2. Veterinário " << endl;
    cout << "0. Voltar ao menu\n";
	cout<<"ESCOLHA A OPCAO : " << endl;
	cin>>entrada;


	switch(entrada){
    case 0:
        return meu_menu();
	case 1:
		cout << "opcao " << entrada;
		nome.tratador();
		break;
	case 2:
		cout << " opcao " << entrada;
		nome.veterinario();
		break;
	default:
		cout << "Opcao  " << entrada << " invalida. ";
		return cadastrarAnimal();
		break;
};


}
void Menu::removerFuncionario(){

}
void Menu::alterarFuncionario(){

}
void Menu::consultarFuncionario(){

}


int main () {
	map <int, Veterinario> map_vet;
    cout << "TESTANDO  (Animais estão todos okay)/// \n";
	Menu ccc;
	ccc.meu_menu();


    return 0;
}
