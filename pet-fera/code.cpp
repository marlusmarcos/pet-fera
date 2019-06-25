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
	    template<typename Classe>
		void animal();
};

template<typename Classe>
void GerenciarAnimal::animal(){
	Classe * ptr = new Classe();
	cout << "o id do animal é: " << ptr->getId() <<"\n";
	//add no map de mamifero
	delete ptr;
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
	GerenciarAnimal g;

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
		cout << "1. Mamífero Nativo\n" << "2. Mamífero Exótico" << endl;
        cin >> entrada;
        switch(entrada){
            case 1:
                g.animal<Mamifero_nativo>();
                break;
            case 2:
                g.animal<Mamifero_exotico>();
                break;
        }
		break;
    case 2:
		cout << "1. Ave Nativa\n" << "2. Ave Exótica" << endl;
        cin >> entrada;
        switch(entrada){
            case 1:
                g.animal<Ave_nativa>();
                break;
            case 2:
                g.animal<Ave_exotica>();
                break;
        }
		break;
    case 3:
		cout << "1. Anfíbio Nativo\n" << "2. Anfíbio Exótico" << endl;
        cin >> entrada;
        switch(entrada){
            case 1:
                g.animal<Anfibio_nativo>();
                break;
            case 2:
                g.animal<Anfibio_exotico>();
                break;
        }
		break;
    case 4:
		cout << "1. Reptil Nativo\n" << "2. Reptil Exótico" << endl;
        cin >> entrada;
        switch(entrada){
            case 1:
                g.animal<Reptil_nativo>();
                break;
            case 2:
                g.animal<Reptil_exotico>();
                break;
        }
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
