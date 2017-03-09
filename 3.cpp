#include <iostream>

using namespace std;

class Empregado{
public:
    string nome, sNome;
    float sMens;

    Empregado(const string &nome, const string &sNome, float sMens) : nome(nome), sNome(sNome), sMens(sMens) {
        if(sMens<0){
            cout << "Salario negativo nao sera computado" <<endl;
            throw invalid_argument("Salario negativo");
        }
    }

    const string &getNome() const {
        return nome;
    }

    void setNome(const string &nome) {
        Empregado::nome = nome;
    }

    const string &getSNome() const {
        return sNome;
    }

    void setSNome(const string &sNome) {
        Empregado::sNome = sNome;
    }

    float getSMens() const {
        return sMens;
    }

    void setSMens(float sMens) {
        Empregado::sMens = sMens;
    }

    float addTen(){
        return (this->sMens*10)/100;
    }

};

int main(){

    string nome, sNome;
    float sMens, att;

    Empregado e("Amaro", "Neto", 7900);
    Empregado e1("Huzky", "Whitesky", 7900);

    cout << "Nome: " << e.getNome() << " Sobrenome: " << e.getSNome() << " Salario anual: " << e.getSMens()*12 << endl;
    cout << "Nome: " << e1.getNome() << " Sobrenome: " << e1.getSNome() << " Salario anual: " << e1.getSMens()*12 << endl;

    cout<<endl;

    cout << "------------- ADICIONAL DE 10%-------------"<<endl;

    cout<<endl;

    cout << "Nome: " << e.getNome() << " Sobrenome: " << e.getSNome() << " Salario anual: " << (e.getSMens() + e.addTen())*12 << endl;
    cout << "Nome: " << e1.getNome() << " Sobrenome: " << e1.getSNome() << " Salario anual: " << (e1.getSMens() + e1.addTen())*12 << endl;


    return 0;
}
