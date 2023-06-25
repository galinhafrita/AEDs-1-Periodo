#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

/*
Nome - Matheus Fagundes
Ultima Atualizacao - 25/06/2023
Objetivo - Classe Aluno
*/

class Pessoa
{
private:
    int codigo;
    string nome;
    int idade;
    string endereco;
    int numero;
    string complemento;

public:
    Pessoa()
    {
        inicializar(0, "Nenhum",0 , "Nenhum", 0, "Sem");
    }

    Pessoa(int nCodigo, string nNome, int nIdade, string nEndereco, int nNumero, string nComplemento)
    {
        inicializar(nCodigo, nNome, nIdade, nEndereco, nNumero, nComplemento);
    }

    void inicializar(int nCodigo, string nNome, int nIdade, string nEndereco, int nNumero, string nComplemento)
    {
        setCodigo(nCodigo);
        setNome(nNome);
        setIdade(nIdade);
        setEndereco(nEndereco);
        setNumero(nNumero);
        setComplemento(nComplemento);
    }

    void setCodigo(int nCodigo)
    {
        codigo = nCodigo;
    }
    void setNome(string nNome)
    {
        bool controlador = true;

        while (controlador)
        {
            if (nNome.length() < 3)
            {
                cout << "Nome invalido. Digite novamente: " << endl;
                cin >> nNome;
            }
            else
            {
                nome = nNome;
                controlador = false;
            }
        }
    }
    void setIdade(int nIdade)
    {
        bool controlador = true;

        while (controlador)
        {
            if (nIdade < 0 )
            {
                cout << "Idade invalida, insira uma nova idade: ";
                cin >> nIdade;
            }
            else
            {
                idade = nIdade;
                controlador = false;
            }
            
        }
        
    }
    void setEndereco(string nEndereco)
    {
        endereco = nEndereco;
    }

    void setNumero(int nNumero)
    {
        bool controlador = true;

        while (controlador)
        {
            if (nNumero < 0 || nNumero > 9999)
            {
                cout << "Numero invalido, digite um valor valido: " << endl;
                cin >> nNumero;
            }
            else
            {
                numero = nNumero;
                controlador = false;
            }
        }
    }

    void setComplemento(string nComplemento)
    {
        complemento = nComplemento;
    }

    int getCodigo()
    {
        return codigo;
    }
    string getNome()
    {
        return nome;
    }
    int getIdade()
    {
        return idade;
    }
    string getEndereco()
    {
        return endereco;
    }
    int getNumero()
    {
        return numero;
    }
    string getComplemento()
    {
        return complemento;
    }
};

int main(void)
{
    int codigo;
    string nome;
    int idade;
    string endereco;
    int numero;
    string complemento;

    int quant;
    cout << "Insira a quantidade de pessoa: ";
    cin >> quant;

    Pessoa *pessoas = new Pessoa[quant];

    for (int i = 0; i < quant; i++)
    {
        cout << "Insira o codigo: ";
        cin >> codigo;
        pessoas[i].setCodigo(codigo);

        cin.ignore();

        cout << "Insira o nome: ";
        getline(cin, nome);
        pessoas[i].setNome(nome);
        

        cout << "Insira uma idade: ";
        cin >> idade;
        pessoas[i].setIdade(idade);

        cin.ignore();

        cout << "Insira o endereco: ";
        getline(cin, endereco);
        pessoas[i].setEndereco(endereco);

        cout << "Insira o numero: ";
        cin >> numero;
        pessoas[i].setNumero(numero);

        cin.ignore();

        cout << "Insita o complemento: ";
        getline(cin, complemento);
        pessoas[i].setComplemento(complemento);
    }

    // Adicionando as informacoes em um arquivo.

    string nomerArq;

    cout << "Insira o nome do arquivo: ";
    cin >> nomerArq;

    ofstream arquivo(nomerArq + ".txt");

    if (arquivo.is_open())
    {

        for (int j = 0; j < quant; j++)
        {
            arquivo << "Pessoa " << j+1 << endl << endl;
            arquivo << "Codigo: " << pessoas[j].getCodigo() << endl;
            arquivo << "Nome: " << pessoas[j].getNome() << endl;
            arquivo << "Idade: " << pessoas[j].getIdade() << endl;
            arquivo << "Endereco: " << pessoas[j].getEndereco() << endl;
            arquivo << "Numero: " << pessoas[j].getNumero() << endl;
            arquivo << "Complemento: " << pessoas[j].getComplemento() << endl << endl;
        }
        arquivo.close();
    }
    else cout << "Não foi possivel abrir o arquivo" << endl;

    delete[] pessoas;
    return 0;
}