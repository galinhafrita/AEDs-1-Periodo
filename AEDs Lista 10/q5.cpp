#include<iostream>
#include<fstream>
#include<iomanip>
using namespace std;

/*
Autor - Matheus Fagundes
Ultima Atualizacao - 27/06/2023
Objetivo - 
*/

class FormaGeometrica
{
    private:

    string nome;
    int largura;
    int altura;
    int definnnidor=0;

    public:

    FormaGeometrica()
    {
        inicializar("Nenhum", 0, 0);
    }
    FormaGeometrica(string nNome, int nLargura, int nAltura)
    {
        inicializar(nNome, nLargura, nAltura);
    }
    void inicializar(string nNome, int nLargura, int nAltura)
    {
        setNome(nNome);
        setLargura(nLargura);
        setAltura(nAltura);
    }
    void setNome(string nNome)
    {
        bool controlador = true;

        while(controlador)
        {
            if(nNome != "Retangulo" && nNome != "Triangulo"	)
            {
                cout << "Nome invalido, digite novamente: ";
                cin >> nNome;
            }
            else
            {
                if(nNome == "Retangulo")
                {
                    definnnidor = 1;
                }
                else
                {
                    definnnidor = 2;
                }
                nome = nNome;
                controlador = false;
            }
        }
        
    }
    void setLargura(int nLargura)
    {
        bool controlador; 

        while(controlador)
        {
            if(nLargura < 0)
            {
                cout << "Largura invalida, digite novamente: ";
                cin >> nLargura;
            }
            else
            {
                largura = nLargura;
                controlador = false;
            }
        }

    }
    void setAltura(int nAltura)
    {
        bool controlador = true;

        while(controlador)
        {
            if(nAltura < 0)
            {
                cout << "Altura invalida, digite novamente: ";	
                cin >> nAltura;
            }
            else
            {
                altura = nAltura;
                controlador = false;
            }
        }
    }

    string getNome()
    {
        return nome;
    }
    int getLargura()
    {
        return largura;
    }
    int getAltura()
    {
        return altura;
    }
    int getDefinnnidor()
    {
        return definnnidor;
    }
    float getArea()
    {
        if(definnnidor == 1)
        {
            return largura*altura;
        }
        else
        {
            return (largura*altura)/2;
        }
    }

};

int main(void)
{
    string nome;
    int altura;
    int largura;

    FormaGeometrica triangulo, retangulo;

    cout << "Digite o nome da forma geometrica: ";
    cin >> nome;

    if (nome == 'Retangulo')
    {
        retangulo.setNome(nome);

        cout << "Digite a altura da forma geometrica: ";
        cin >> altura;
        retangulo.setAltura(altura);

        cout << "Digite a largura da forma geometrica: ";
        cin >> largura;
        retangulo.setLargura(largura);

        cout << "A area do retangulo e: " << retangulo.getArea() << endl;

    }
    else
    {
        triangulo.setNome(nome);
        cout << "Digite a altura da forma geometrica: ";
        cin >> altura;
        triangulo.setAltura(altura);
        cout << "Digite a largura da forma geometrica: ";
        cin >> largura;
        triangulo.setLargura(largura);
        cout << "A area do triangulo e: " << triangulo.getArea() << endl;
    }
    
    return 0;

}