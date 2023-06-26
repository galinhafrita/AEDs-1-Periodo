#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

/*
Autor - Matheus Fagundes
Ultima Atualizacoes - 26/06/2023
Objetivo - Listar em um arquivo aniversariantes filtrado por mes
*/

class Pessoa
{
private:
    string nome;
    int dia, mes;

public:
    Pessoa()
    {
        inicializar("Nenhuma", 1, 1);
    }

    Pessoa(string nNome, int nDia, int nMes)
    {
        inicializar(nNome, nDia, nMes);
    }

    void inicializar(string nNome, int nDia, int nMes)
    {
        setNome(nNome);
        setDia(nDia);
        setMes(nMes);
    }

    void setNome(string nNome)
    {
        bool controlador = true;

        while (controlador)
        {
            if (nNome.length() < 3)
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

    void setDia(int nDia)
    {
        bool controlador = true;

        while (controlador)
        {
            if (nDia < 1 || nDia > 31)
            {
                cout << "Dia invalido, digite novamente: ";
                cin >> nDia;
            }
            else
            {
                dia = nDia;
                controlador = false;
            }
        }
    }

    void setMes(int nMes)
    {
        bool controlador = true;

        while (controlador)
        {
            if (nMes < 1 || nMes > 12)
            {
                cout << "Mes invalido, digite novamente: ";
                cin >> nMes;
            }
            else
            {
                mes = nMes;
                controlador = false;
            }
        }
    }

    string getNome()
    {
        return nome;
    }

    int getDia()
    {
        return dia;
    }

    int getMes()
    {
        return mes;
    }
};

int main(void)
{
    int quant;

    cout << "Digite a quantidade de pessoas: ";
    cin >> quant;

    Pessoa *lista = new Pessoa[quant];

    string nome;
    int dia, mes;

    for (int i = 0; i < quant; i++)
    {
        cin.ignore();

        cout << "Digite o nome: ";
        getline(cin, nome);
        lista[i].setNome(nome);

        cout << "Digite o dia que nasceu: ";
        cin >> dia;
        lista[i].setDia(dia);

        cout << "Digite o mes que nasceu: ";
        cin >> mes;
        lista[i].setMes(mes);
    }

    string nomerArq;

    cout << "Insira o nome do arquivo: ";
    cin >> nomerArq;

    ofstream arquivo(nomerArq + ".txt");

    if (arquivo.is_open())
    {

        for (int i = 1; i < 13; i++)
        {
            if (i == 1)
                {
                    arquivo << "JANEIRO\n" << endl;
                }
                else if (i == 2)
                {
                    arquivo << "FEVEREIRO\n" << endl;
                }
                else if (i == 3)
                {
                    arquivo << "MARCO\n" << endl;
                }
                else if (i == 4)
                {
                    arquivo << "ABRIL\n" << endl;
                }
                else if (i == 5)
                {
                    arquivo << "MAIO\n" << endl;
                }
                else if (i == 6)
                {
                    arquivo << "JUNHO\n" << endl;
                }
                else if (i == 7)
                {
                    arquivo << "JULHO\n" << endl;
                }
                else if (i == 8)
                {
                    arquivo << "AGOSTO\n" << endl;
                }
                else if (i == 9)
                {
                    arquivo << "SETEMBRO\n" << endl;
                }
                else if (i == 10)
                {
                    arquivo << "OUTUBRO\n" << endl;
                }
                else if (i == 11)
                {
                    arquivo << "NOVEMBRO\n" << endl;
                }
                else if (i == 12)
                {
                    arquivo << "DEZEMBRO\n" << endl;
                }
            for (int j = 0; j < quant; j++)
            {
                if (lista[j].getMes() == i)
                {
                arquivo << "Nome: " << lista[j].getNome() << endl;
                arquivo << "Aniversario: " << lista[j].getDia() << "/" << lista[j].getMes() << "\n" << endl;
                }
            }
        }

        arquivo.close();
    }
    delete[] lista;
    return 0;
}