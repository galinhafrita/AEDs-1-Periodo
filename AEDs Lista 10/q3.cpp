#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

/*
Autor - Matheus Fagundes
Ultima Atualizacao - 26/06/2023
Objetivo - Manipulacao de eletrodomesticos
*/

class Eletrodomestico
{
    private:

    string nome;
    string telefone;
    int preco;

    public:

    Eletrodomestico()
    {
        inicializar("Nenhum", "Nenhum", 1);
    }

    Eletrodomestico(string nNome, string nTelefone, int nPreco)
    {
        inicializar(nNome, nTelefone, nPreco);
    }

    void inicializar(string nNome, string nTelefone, int nPreco)
    {
        setNome(nNome);
        setTelefone(nTelefone);
        setPreco(nPreco);
    }

    void setNome(string nNome)
    {
        bool controlador = true;

        while (controlador)
        {
            if(nNome.length() < 3)
            {
                cout << "Nome invalido, digite novamente: ";
                cin >> nNome;
            }
            else
            {
                nome = nNome;
                controlador = false;
            }
        }
    }

    void setTelefone(string nTelefone)
    {
        telefone = nTelefone;
    }
    void setPreco(int nPreco)
    {
        bool controlador = true;

        while(controlador)
        {
            if (nPreco < 0)
            {
                cout << "Preco invalido, digite novamente";
                cin >> nPreco;
            }
            else
            {
                preco = nPreco;
                controlador = false;
            }
        }
    }

    string getNome() { return nome; }
    string getTelefone() { return telefone; }
    int getPreco() { return preco; }

};

int main(void)
{

    int quant;

    cout << "Digite a quantidade de lojas: ";
    cin >> quant;

    cin.ignore();

    Eletrodomestico *lojas = new Eletrodomestico[quant];

    string nome;
    string telefone;
    int preco;
    float media, precoTot=0;


    string nomerArq;

    cout << "Insira o nome do arquivo: ";
    cin >> nomerArq;

    
    ifstream arquivo(nomerArq + ".txt");

    for (int i = 0; i < quant; i++)
    {
        getline(arquivo, nome);
        lojas[i].setNome(nome);

        getline(arquivo, telefone);
        lojas[i].setTelefone(telefone);

        arquivo >> preco;
        lojas[i].setPreco(preco);

        arquivo.ignore(15, '\n');

        precoTot += lojas[i].getPreco();
    }

    media = precoTot/quant;

    string nomerArq2;

    cout << "Insira o nome do arquivo: ";
    cin.ignore();
    cin >> nomerArq2;

    ofstream arquivo2(nomerArq2 + ".txt");

    if (arquivo2.is_open())
    {
        
        arquivo2 << "Media dos precos: " << media << endl;
        
        for (int j = 0; j < quant; j++)
        {
            if (lojas[j].getPreco() < media)
            {
                arquivo2 << "Nome: " << lojas[j].getNome() << endl;
                arquivo2 << "Telefone: " << lojas[j].getTelefone() << endl;
            }
        }
        arquivo2.close();
    }
    else cout << "Não foi possivel abrir o arquivo" << endl;

    delete[] lojas;
    return 0;
}
