#include <iostream>
#include <stdexcept>

using namespace std;

class Data{

public:
    int dia;
    int mes;
    int ano;

    Data(int dia, int mes, int ano) : dia(dia), mes(mes), ano(ano) { //INICIALIZOU
        if(dia<1 || dia >31){
            cout << "Dia invalido"<<endl;
            throw invalid_argument("Dia invalido");
        }

        if(mes<1 || mes >12){
            cout << "Mes invalido"<<endl;
            throw invalid_argument("Mes invalido");
        }

        if(ano<0){
            cout << "Ano invalido"<<endl;
            throw invalid_argument("Ano invalido");
        }
    }

    int getDia() const {
        return dia;
    }

    void setDia(int dia) {
        Data::dia = dia;
    }

    int getMes() const {
        return mes;
    }

    void setMes(int mes) {
        Data::mes = mes;
    }

    int getAno() const {
        return ano;
    }

    void setAno(int ano) {
        Data::ano = ano;
    }

    void avancarDia(){
        
        if(dia<=31){
            this->dia++;
        }

        if(dia>31){
        	this->dia=1;
            this->mes++;
        }

        if(mes>12){
        	this->mes = 1;
            this->ano++;
        }
    };

};


int main() {

    int dia, mes, ano;

    cout << "Digite o dia: ";
    cin >> dia;

    cout << "Digite o mes: ";
    cin >> mes;

    cout << "Digite o ano: ";
    cin >> ano;

    Data d(dia, mes, ano);

    d.setDia(dia);
    d.setMes(mes);
    d.setAno(ano);

    cout << d.getDia() << "/" << d.getMes() << "/" << d.getAno() << endl;
    d.avancarDia();
    cout << "Dia avancado" << endl;
    cout << d.getDia() << "/" << d.getMes() << "/" << d.getAno() << endl;

    return 0;
}