#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

/*
Autor - Matheus Fagundes Araujo
Ultima Atualizacao - 26/06/2023
Objetivo - Cadastro de conta bancaria
*/

class Conta
{
    private:

    int numero;
    string nome;
    int saldo;

    public:

    Conta()
    {
        inicializar(0, "Nenhum", 0);
    }
    Conta(int nNumero, string nNome, int nSaldo)
    {
        inicializar(nNumero, nNome, nSaldo);
    }
    void inicializar(int nNumero, string nNome, int nSaldo)
    {
        setNumero(nNumero);
        setNome(nNome);
        setSaldo(nSaldo);
    }
    void setNumero(int nNumero)
    {
        numero = nNumero;
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
    void setSaldo(int nSaldo)
    {
        saldo = nSaldo;
    }
    int getNumero()
    {
        return numero;
    }
    string getNome()
    {
        return nome;
    }
    int getSaldo()
    {
        return saldo;
    }
};

int main(void)
{
    int quant;
    cout << "Digite a quantidade de pessoas: ";
    cin >> quant;

    Conta *informacoes = new Conta[quant];

    int numero, saldo;
    string nome;

    for (int i = 0; i < quant; i++)
    {
        cout << "Digite o numero da conta: ";
        cin >> numero;
        informacoes[i].setNumero(numero);

        cin.ignore();

        cout << "Digite o Nome da pessoa: ";
        getline(cin, nome);
        informacoes[i].setNome(nome);


        cout << "Digite o saldo da conta: ";
        cin >> saldo;
        informacoes[i].setSaldo(saldo);
    }

    string arq;
    cout << "Digite o nome do arquivo: ";
    cin >> arq;

    ofstream arquivo(arq + ".txt");

    if (arquivo.is_open())  
    {
        for (int j = 0; j < quant; j++)
        {
            arquivo << "Numero: " << informacoes[j].getNumero() << endl;
            arquivo << "Nome: " << informacoes[j].getNome() << endl;
            arquivo << "Saldo: " << informacoes[j].getSaldo() << endl;
        }

        arquivo.close();
    }
    else cout << "Nao foi possivel abrir o arquivo" << endl;
    
    delete[] informacoes;
    return 0;

}