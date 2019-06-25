#include <string>
#include <iostream>
#include <map>
#include <utility>

using namespace std;

/****************FUNCIONARIO*****************************/

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

/**********************TRATADOR*****************************/

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

/*************************VETERINARIO*****************************/

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

/****************ANIMAL*******************************************/

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
		void printAnimal();
		void setAnimal();
};

Animal::Animal(){
    setAnimal();
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

void Animal::printAnimal(){
    cout<< "Id: " << getId() << endl;
	cout << "Classe: " << getClasse() << endl;
	cout<< "Nome cientifico: " << getNomeCientifico() << endl;
	cout<< "Sexo: " << getSexo() << endl;
	cout<< "Tamanho: " << getTamanho() << endl;
	cout<< "Dieta: " << getDieta() << endl;
	cout<< "Nome do batismo: " << getNomeBatismo() << endl;
}

void Animal::setAnimal(){
    cout<< "Digite o id do animal: " << endl;
	cin >> this->id;
	cout << "Digite a classe do animal: " << endl;
	cin >> this->classe;
	cout<< "Digite o nome cientifico: " << endl;
	cin >> this->nome_cientifico;
	cout<< "Digite o sexo: " << endl;
	cin >> this->sexo;
	cout<< "Digite o tamanho: " << endl;
	cin >> this->tamanho;
	cout<< "Digite a dieta: " << endl;
	cin >> this->dieta;
	cout<< "Digite o nome do batismo: " << endl;
	cin >> this->nome_batismo;
}

/***********************ANIMAL SILVESTRE***********************/

class Animal_silvestre{
    // === Atributs ===
    private:
	std::string m_autorizacao_ibama;

	public:
	std::string get_autorizacao_ibama(void);
	Animal_silvestre();
	~Animal_silvestre(){};
	//void set_autorizacao_ibama(std::string autorizacao_ibama);
	void setAnimalSilvestre();
	void printAnimalSilvestre();
};

Animal_silvestre::Animal_silvestre(){
    setAnimalSilvestre();
}

std::string Animal_silvestre::get_autorizacao_ibama(void)
{ return m_autorizacao_ibama; }

void Animal_silvestre::setAnimalSilvestre(){
    cout << "Digite a autorização do ibama: ";
    cin >> this->m_autorizacao_ibama;
}
/*
void Animal_silvestre::set_autorizacao_ibama(std::string autorizacao_ibama)
{m_autorizacao_ibama = autorizacao_ibama; }
*/

void Animal_silvestre::printAnimalSilvestre(){
    cout << "Autorização do ibama: " << m_autorizacao_ibama << endl;
}

/***********************ANIMAL EXOTICO******************/

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
    void setAnimalExotico();
    void printAnimalExotico();
};

Animal_exotico::Animal_exotico() : Animal_silvestre() {
    setAnimalExotico();
}

Animal_exotico::~Animal_exotico() = default;


std::string Animal_exotico::get_pais_origem(void)
{ return m_pais_origem; }

void Animal_exotico::setAnimalExotico(){
    cout << "Digite o país de origem: ";
    cin >> this->m_pais_origem;
}
/*
void Animal_exotico::set_pais_origem(std::string pais_origem)
{ m_pais_origem = pais_origem; }
*/

void Animal_exotico::printAnimalExotico(){
    cout << "País de origem: " << m_pais_origem << endl;
}

/********************ANIMAL NATIVO***********************/

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
    void setAnimalNativo();
    void printAnimalNativo();

};
Animal_nativo::Animal_nativo() : Animal_silvestre(){
    setAnimalNativo();
}


Animal_nativo::~Animal_nativo() = default;


std::string Animal_nativo::get_uf_origem(void)
{ return m_uf_origem; }


std::string Animal_nativo::get_autorization(void)
{ return m_autorizacao; }

void Animal_nativo::set_uf_origem(std::string uf_origem)
{ m_uf_origem = uf_origem; }

void Animal_nativo::setAnimalNativo(){
    cout << "Digite a uf de origem: ";
    cin >> this->m_uf_origem;
    cout << "Digite a autorização: ";
    cin >> this->m_autorizacao;
}

void Animal_nativo::printAnimalNativo(){
    cout << "Uf de origem: " << m_uf_origem << endl;
    cout << "Autorização: " << m_autorizacao << endl;
}

/*
void Animal_nativo::set_autorizacao(std::string autorizacao)
{ m_autorizacao = autorizacao; }
*/

/*********************ANFIOBIO*********************/

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
		void setAnfibio();
		void printAnfibio();
};

Anfibio::Anfibio() : Animal(){
    setAnfibio();
}

Anfibio::Anfibio(int id , string nome_cientifico, char sexo, int tamanho, string dieta, string nome_batismo) {
	this->id=id;
	this->nome_cientifico = nome_cientifico;
	this->sexo=sexo;
	this->tamanho=tamanho;
	this->dieta=dieta;
	this->nome_batismo = nome_batismo;
};

void Anfibio::setAnfibio(){
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

void Anfibio::printAnfibio(){
    cout << "Total de mudas: " << total_de_mudas;
    cout << "Data da última muda: " << ultima_muda.dia
    << "/" << ultima_muda.mes << "/" << ultima_muda.ano << endl;
}

/******************ANFIBIO EXOTICO***********************************/

class Anfibio_exotico : public Anfibio, public Animal_exotico {
    public:
        Anfibio_exotico();
        ~Anfibio_exotico();
        void setAnfibioExotico();
        void printAnfibioExotico();
};

/// Getters && Setters
Anfibio_exotico::Anfibio_exotico(): Anfibio(), Animal_exotico(){}

Anfibio_exotico:: ~Anfibio_exotico() = default;

void Anfibio_exotico::setAnfibioExotico(){
    setAnimal();
    setAnfibio();
    setAnimalExotico();
    setAnimalSilvestre();
}

void Anfibio_exotico::printAnfibioExotico(){
    printAnimal();
    printAnfibio();
    printAnimalExotico();
    printAnimalSilvestre();
}
/********************ANFIBIO NATIVO********************/

class Anfibio_nativo : public Anfibio, public Animal_nativo {
    public:
        Anfibio_nativo();
        ~Anfibio_nativo();
        void printAnfibioNativo();
        void setAnfibioNativo();
};

// Constructor & Destructors
Anfibio_nativo::Anfibio_nativo() : Anfibio(), Animal_nativo(){}

Anfibio_nativo::~Anfibio_nativo() = default;

void Anfibio_nativo::printAnfibioNativo(){
    printAnimal();
    printAnfibio();
    printAnimalNativo();
    printAnimalSilvestre();
}

void Anfibio_nativo::setAnfibioNativo(){
    setAnimal();
    setAnfibio();
    setAnimalNativo();
    setAnimalSilvestre();
}
/*********************MAMIFERO*********************/

class Mamifero : public Animal {
	protected:
		string cor_pelo;
	public:
		Mamifero();
		Mamifero(int id , string nome_cientifico, char sexo, int tamanho, string dieta, string nome_batismo, string cor_pelo);
		//~Mamifero();
		//void setCorPelo();
		std::string getCorPelo();
		void setMamifero();
		void printMamifero();
};

Mamifero::Mamifero() : Animal(){
    setMamifero();
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

string Mamifero::getCorPelo(){
    return this->cor_pelo;
}

void Mamifero::setMamifero(){
    cout << "Digite a cor do pelo: ";
    cin >> cor_pelo;
}

void Mamifero::printMamifero(){
    cout << "Cor do pelo: " << cor_pelo << endl;
}

/******************MAMIFERO EXOTICO***************************************/

class Mamifero_exotico : public Mamifero, public Animal_exotico {
    protected:
    public:
	/// Getters && Setters
	Mamifero_exotico();
	~Mamifero_exotico();
	void printMamiferoExotico();
	void setMamiferoExotico();
};

// Constructor & Destructors
Mamifero_exotico::Mamifero_exotico() : Mamifero(), Animal_exotico(){}

Mamifero_exotico::~Mamifero_exotico() = default;

void Mamifero_exotico::printMamiferoExotico(){
    printAnimal();
    printMamifero();
    printAnimalExotico();
    printAnimalSilvestre();
}

void Mamifero_exotico::setMamiferoExotico(){
    setAnimal();
    setMamifero();
    setAnimalExotico();
    setAnimalSilvestre();
}

/***********************MAMIFERO NATIVO**********************************/

class Mamifero_nativo : public Mamifero, public Animal_nativo {
    protected:
    public:
	/// Getters && Setters
	Mamifero_nativo();
	~Mamifero_nativo();
	void printMamiferoNativo();
	void setMamiferoNativo();
};

// Constructor & Destructors
Mamifero_nativo::Mamifero_nativo() : Mamifero(), Animal_nativo(){}

Mamifero_nativo::~Mamifero_nativo() = default;

void Mamifero_nativo::printMamiferoNativo(){
    printAnimal();
    printMamifero();
    printAnimalNativo();
    printAnimalSilvestre();
}

void Mamifero_nativo::setMamiferoNativo(){
    setAnimal();
    setMamifero();
    setAnimalNativo();
    setAnimalSilvestre();
}
/**************************REPTIL*******************************************/

class Reptil : public Animal {
	protected:
		bool venenoso;
		string tipo_venenoso;
	public:
		Reptil();
		Reptil(int id , string nome_cientifico, char sexo, int tamanho, string dieta, string nome_batismo,  bool venenoso, string tipo_venenoso);
        void setReptil();
        void printReptil();
};

Reptil::Reptil() : Animal(){
    setReptil();
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

void Reptil::setReptil(){
    cout << "Digite 1 para venenoso ou 0 para não venenoso" << endl;
	cin >> this->venenoso;
	cout << "Digite o tipo do neveno" << endl;
	cin >> this->tipo_venenoso;
}

void Reptil::printReptil(){
    cout << "Venenoso: " << venenoso << "\n"
        << "Tipo do neveno: " << tipo_venenoso << endl;
}

/**********************REPTIL EXOTICO**************************/

class Reptil_exotico : public Reptil, public Animal_exotico {
    protected:
    public:
	/// Getters && Setters
	Reptil_exotico();
	~Reptil_exotico();
	void printReptilExotico();
	void setReptilExotico();
};

// Constructor & Destructors
Reptil_exotico::Reptil_exotico() : Reptil(), Animal_exotico(){}

Reptil_exotico::~Reptil_exotico() = default;

void Reptil_exotico::printReptilExotico(){
    printAnimal();
    printReptil();
    printAnimalExotico();
    printAnimalSilvestre();
}

void Reptil_exotico::setReptilExotico(){
    setAnimal();
    setReptil();
    setAnimalExotico();
    setAnimalSilvestre();
}

/********************REPTIL NATIVO**********************/

class Reptil_nativo : public Reptil, public Animal_nativo {
    protected:
    public:
	/// Getters && Setters
	Reptil_nativo();
	~Reptil_nativo();
	void printReptilNativo();
	void setReptilNativo();
};

// Constructor & Destructors
Reptil_nativo::Reptil_nativo() : Reptil(), Animal_nativo(){}

Reptil_nativo::~Reptil_nativo() = default;

void Reptil_nativo::printReptilNativo(){
    printAnimal();
    printReptil();
    printAnimalNativo();
    printAnimalSilvestre();
}

void Reptil_nativo::setReptilNativo(){
    setAnimal();
    setReptil();
    setAnimalNativo();
    setAnimalSilvestre();
}

/************************AVE***************************/

class Ave : public Animal {
	protected:
		double tamanho_do_bico;
		double envergadura_asas;
	public:
        Ave();
        Ave(int id, string nome_cientifico, char sexo, int tamanho, string dieta, string nome_batismo, double tamanho_do_bico, double envergadura_asas);
        void setAve();
        void printAve();
};
Ave::Ave() : Animal(){
    setAve();
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

void Ave::setAve(){
    cout<< "Digite o tamanho do bico: ";
    cin >> this->tamanho_do_bico;
    cout<< "Digite a envergadura das asas: ";
    cin >> this->envergadura_asas;
}

void Ave::printAve(){
    cout<< "Tamanho do bico: " << tamanho_do_bico << "\n"
        << "Envergadura das asas: " << this->envergadura_asas << endl;
}

/***************************AVE EXOTICA**********************************/

class Ave_exotica : public Ave, public Animal_exotico {
    protected:
    public:
	/// Getters && Setters
	Ave_exotica();
	~Ave_exotica();
	void printAveExotica();
	void setAveExotica();
};
    // Constructor & Destructors
Ave_exotica::Ave_exotica() : Ave(), Animal_exotico(){}

Ave_exotica::~Ave_exotica() = default;

void Ave_exotica::printAveExotica(){
    printAnimal();
    printAve();
    printAnimalExotico();
    printAnimalSilvestre();
}

void Ave_exotica::setAveExotica(){
    setAnimal();
    setAve();
    setAnimalExotico();
    setAnimalSilvestre();
}

/********************AVE NATIVA***************************/

class Ave_nativa: public Ave, public Animal_nativo {
    protected:
    public:
	/// Getters && Setters
	Ave_nativa();
	~Ave_nativa();
	void printAveNativa();
	void setAveNativa();
};

// Constructor & Destructors
Ave_nativa::Ave_nativa() : Ave(), Animal_nativo(){}

Ave_nativa::~Ave_nativa() = default;

void Ave_nativa::printAveNativa(){
    printAnimal();
    printAve();
    printAnimalNativo();
    printAnimalSilvestre();
}

void Ave_nativa::setAveNativa(){
    setAnimal();
    setAve();
    setAnimalNativo();
    setAnimalSilvestre();
}
/********************GERENCIADOR DE FUNCIONARIOS**************************/

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

/*
class GerenciarAnimal { //essa classe serve para um suporte aoo menu, é aqui onde será colocada no map o animal
	public:
	    template<typename Classe>
		Classe * criarAnimal();
};

//Cria uma nova classe cujo o tipo eh o parametro "Classe", e retorna um ponteiro para ela
template<typename Classe>
Classe * GerenciarAnimal::criarAnimal(){
	Classe * ptr = new Classe();
	//cout << "o id do animal é: " << ptr->getId() <<"\n";
	//add no map de mamifero
	//delete ptr;
	return ptr;
};
*/

class Maps_animais {
    protected:
        map<int, Mamifero_nativo*> mamif_nat;
        map<int, Mamifero_exotico*> mamif_exo;
        map<int, Anfibio_nativo*> anf_nat;
        map<int, Anfibio_exotico*> anf_exo;
        map<int, Reptil_nativo*> rep_nat;
        map<int, Reptil_exotico*> rep_exo;
        map<int, Ave_nativa*> ave_nat;
        map<int, Ave_exotica*> ave_exo;
    public:
        //template<typename nome_map>
        void printMamiferos();
        void printAnfibios();
        void printRepteis();
        void printAves();
        void cadastrarMamifero();
        void cadastrarAnfibio();
        void cadastrarReptil();
        void cadastrarAve();
        void alterarAnfibio();
        void alterarMamifero();
        void alterarReptil();
        void alterarAve();
};

void Maps_animais::printMamiferos(){
    while(1){
        int ch;
        cout << "****Consulta de dados****\n"
            << "0. Voltar\n"
            << "1. Mamíferos Nativos\n"
            << "2. Mamíferos Exóticos" << endl;
        cin >> ch;
        switch(ch){
            case 0:{
                return;
            }
            case 1:{
                for(auto it : mamif_nat){
                    it.second->printMamiferoNativo();
                }
                break;
            }
            case 2:{
                for(auto it : mamif_exo){
                    it.second->printMamiferoExotico();
                }
                break;
            }
            default:
                cout << "Entrada Inválida" << endl;
                break;
        }
    }
}

void Maps_animais::printAnfibios(){
    while(1){
        int ch;
        cout << "****Consulta de dados****\n"
            << "0. Voltar\n"
            << "1. Anfíbios Nativos\n"
            << "2. Anfíbios Exóticos" << endl;
        cin >> ch;
        switch(ch){
            case 0:{
                return;
            }
            case 1:{
                for(auto it : anf_nat){
                    it.second->printAnfibioNativo();
                }
                break;
            }
            case 2:{
                for(auto it : anf_exo){
                    it.second->printAnfibioExotico();
                }
                break;
            }
            default:
                cout << "Entrada Inválida" << endl;
                break;
        }
    }
}

void Maps_animais::printRepteis(){
    while(1){
        int ch;
        cout << "****Consulta de dados****\n"
            << "0. Voltar\n"
            << "1. Répteis Nativos\n"
            << "2. Répteis Exóticos" << endl;
        cin >> ch;
        switch(ch){
            case 0:{
                return;
            }
            case 1:{
                for(auto it : rep_nat){
                    it.second->printReptilNativo();
                }
                break;
            }
            case 2:{
                for(auto it : rep_exo){
                    it.second->printReptilExotico();
                }
                break;
            }
            default:
                cout << "Entrada Inválida" << endl;
                break;
        }
    }
}

void Maps_animais::printAves(){
    while(1){
        int ch;
        cout << "****Consulta de dados****\n"
            << "0. Voltar\n"
            << "1. Aves Nativos\n"
            << "2. Aves Exóticos" << endl;
        cin >> ch;
        switch(ch){
            case 0:{
                return;
            }
            case 1:{
                for(auto it : ave_nat){
                    it.second->printAveNativa();
                }
                break;
            }
            case 2:{
                for(auto it : ave_exo){
                    it.second->printAveExotica();
                }
                break;
            }
            default:
                cout << "Entrada Inválida" << endl;
                break;
        }
    }
}

/***********CADASTRO DE ANIMAIS**********************************/

void Maps_animais::cadastrarMamifero(){
    int entrada;
    cout << "0. Voltar\n" << "1. Mamífero Nativo\n" << "2. Mamífero Exótico" << endl;
    cin >> entrada;
    switch(entrada){
        case 1:{
            auto * ptr = new Mamifero_nativo();
            mamif_nat.insert(make_pair(ptr->getId(), ptr));
        }
            break;
        case 2:{
            auto * ptr = new Mamifero_exotico();
            mamif_exo.insert(make_pair(ptr->getId(), ptr));
        }
            break;
    }
}
void Maps_animais::cadastrarAnfibio(){
    int entrada;
    cout << "1. Anfíbio Nativo\n" << "2. Anfíbio Exótico" << endl;
    cin >> entrada;
    switch(entrada){
        case 1:{
            auto * ptr = new Anfibio_nativo();
            anf_nat.insert(make_pair(ptr->getId(), ptr));
        }
            break;
        case 2:{
            auto * ptr = new Anfibio_exotico();
            anf_exo.insert(make_pair(ptr->getId(), ptr));
        }
            break;
    }
}

void Maps_animais::cadastrarReptil(){
    int entrada;
    cout << "1. Reptil Nativo\n" << "2. Reptil Exótico" << endl;
    cin >> entrada;
    switch(entrada){
        case 1:{
            auto * ptr = new Reptil_nativo();
            rep_nat.insert(make_pair(ptr->getId(), ptr));
        }
            break;
        case 2:{
            auto * ptr = new Reptil_exotico();
            rep_exo.insert(make_pair(ptr->getId(), ptr));
        }
            break;
    }
}

void Maps_animais::cadastrarAve(){
    int entrada;
    cout << "1. Ave Nativa\n" << "2. Ave Exótica" << endl;
    cin >> entrada;
    switch(entrada){
        case 1:{
            auto * ptr = new Ave_nativa();
            ave_nat.insert(make_pair(ptr->getId(), ptr));
        }
            break;
        case 2:{
            auto * ptr = new Ave_exotica();
            ave_exo.insert(make_pair(ptr->getId(), ptr));
        }
            break;
    }
}

/****************ALTERAR ANIMAIS***********************************************/
void Maps_animais::alterarAnfibio(){
    int ch;
    cout << "0. Voltar\n"
        << "1. Anfíbio Nativo\n"
        << "2. Anfíbio Exótico" << endl;
    cin >> ch;
    switch(ch){
        case 0:
            return;
        case 1:
            cout << "Digite o id: ";
            cin >> ch;
            //colocar uma ação caso nao exista um elemento com a chave ch no map
            anf_nat.at(ch)->setAnfibioNativo();
            break;
        case 2:
            cout << "Digite o id: ";
            cin >> ch;
            anf_exo.at(ch)->setAnfibioExotico();
            break;
    }
}
void Maps_animais::alterarMamifero(){
    int ch;
    cout << "0. Voltar\n"
    << "1. Mamífero Nativo\n"
    << "2. Mamífero Exótico" << endl;
    cin >> ch;
    switch(ch){
        case 0:
            return;
        case 1:
            cout << "***Mamífero Nativo***\n" << "Digite o id: ";
            cin >> ch;
            mamif_nat.at(ch)->setMamiferoNativo();
            break;
        case 2:
            cout << "***Mamífero Exótico***\n" << "Digite o id: ";
            cin >> ch;
            mamif_exo.at(ch)->setMamiferoExotico();
            break;
    }
}

void Maps_animais::alterarReptil(){
    int ch;
    cout << "0. Voltar\n"
    << "1. Réptil Nativo\n"
    << "2. Réptil Exótico" << endl;
    cin >> ch;
    switch(ch){
        case 0:
            return;
        case 1:
            cout << "***Réptil Nativo***\n" << "Digite o id: ";
            cin >> ch;
            rep_nat.at(ch)->setReptilNativo();
            break;
        case 2:
            cout << "***Réptil Exótico***\n" << "Digite o id: ";
            cin >> ch;
            rep_exo.at(ch)->setReptilExotico();
            break;
    }
}

void Maps_animais::alterarAve(){
    int ch;
    cout << "0. Voltar\n"
    << "1. Ave Nativa\n"
    << "2. Ave Exótica" << endl;
    cin >> ch;
    switch(ch){
        case 0:
            return;
        case 1:
            cout << "***Ave Nativo***\n" << "Digite o id: ";
            cin >> ch;
            ave_nat.at(ch)->setAveNativa();
            break;
        case 2:
            cout << "***Ave Exótico***\n" << "Digite o id: ";
            cin >> ch;
            ave_exo.at(ch)->setAveExotica();
            break;
    }
}
/*
template<typename nome_map>
void Maps_animais::imprimir(){

    //for(auto it : nome_map){
        //cout << "Classe : " << it.second->classe;
    //}
}
*/

class Menu : public Maps_animais {
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
    while(1){
        int ch;
        cout << "0. Encerrar Programa\n"
            << "1. Cadastrar animal (FEITO)\n"
            <<"2. Remover um animal\n"
            <<"3. Alterar um animal (FEITO)\n"
            <<"4. Consultar um animal (FEITO)\n"
            <<"5. Cadastrar um funcionario\n"
            << "6. Remover um funcionario\n"
            <<"7. Alterar um Funcionario\n"
            << "8. Consultar um funcionario\n";
        cin >> ch;
        switch (ch) {
            case 0:
                return;
            case 1:
                //cout << " opção: " << op << endl;
                cadastrarAnimal();
                break;
            case 3:
                alterarAnimal();
                break;
            case 4:
                consultarAnimal();
                break;
            case 5:
                //cout << "opção : " << op << endl;
                cadastrarFuncionario();
                break;
            default:
                //return m_menu();
                break;
        }
    }
}


void Menu::cadastrarAnimal(){
	int entrada;
	//GerenciarAnimal g;

	cout <<"0. Voltar ao menu\n"
        <<"1. Cadastrar Mamifero\n"
        <<"2. Cadastrar Ave\n"
        <<"3. Cadastrar Anfibio\n"
        <<"4. Cadastrar Reptil" << endl;
        cin>>entrada;

	switch(entrada){
    case 0:
        return meu_menu();
	case 1:
        cadastrarMamifero();
		break;
    case 2:
        cadastrarAve();
		break;
    case 3:
        cadastrarAnfibio();
		break;
    case 4:
        cadastrarReptil();
		break;
	default:
	    cout << "Entrada Inválida" << endl;
		//return cadastrarAnimal();
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
    int ch;
    while(1){
        cout << "0. Voltar\n"
        << "1. Alterar Anfíbio\n"
        << "2. Alterar Mamífero\n"
        << "3. Alterar Réptil\n"
        << "4. Alterar Ave" << endl;
        cin >> ch;

        switch(ch){
            case 0:
                return;
            case 1:{
                alterarAnfibio();
                break;
            }
            case 2:{
                alterarMamifero();
                break;
            }
            case 3:{
                alterarReptil();
                break;
            }
            case 4:{
                alterarAve();
                break;
            }
        }
    }

}
void Menu::consultarAnimal(){
    int ch;
    while(1){
        cout << "0. Voltar\n"
        << "1. Consultar Anfíbio\n"
        << "2. Consultar Mamífero\n"
        << "3. Consultar Réptil\n"
        << "4. Consultar Ave" << endl;
        cin >> ch;

        switch(ch){
            case 0:
                return;
            case 1:{
                printAnfibios();
                break;
            }
            case 2:{
                printMamiferos();
                break;
            }
            case 3:{
                printRepteis();
                break;
            }
            case 4:{
                printAves();
                break;
            }
            default:
                cout << "Entrada Inválida" << endl;
        }
    }
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
