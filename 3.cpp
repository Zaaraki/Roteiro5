#import <iostream>

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

};

int main(){

    string nome, sNome;
    float sMens;

    Empregado e(nome, sNome, sMens);
    Empregado e1(nome, sNome, sMens);



    cout << e.getNome() << " " << e.getSNome() << " " << e.getSMens() << endl;
    cout << e1.getNome() << " " << e1.getSNome() << " " << e1.getSMens() << endl;

    return 0;
}
